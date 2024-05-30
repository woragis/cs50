from typing import List
from flask import Flask, render_template, request, redirect, session
from flask_session import Session
from cs50 import SQL

app = Flask(__name__)
db = SQL("sqlite:///froshims.db")
app.config["SESSION_PERMANENT"] = False
app.config["SESSION_TYPE"] = "filesystem"
Session(app)

SPORTS: List[str] = ["Basketball", "Soccer", "Ultimate Frisbee", "Footbal"]
FRUITS: List[str] = ["Banana", "Apple", "Kiwi", "Doritos"]


@app.route("/", methods=["GET", "POST"])
def index():
    return render_template(
        "index.html", name=session.get("name"), sports=SPORTS, fruits=FRUITS
    )


@app.route("/register", methods=["POST"])
def register():
    name = request.form.get("name")
    sport = request.form.get("sport")
    if not name:
        return render_template("error.html", message="Name not valid")
    if sport not in SPORTS:
        return render_template("error.html", message="Sport option not valid")
    # for fruit in request.form.getlist("fruits"):
    #    if fruit not in FRUITS:
    #        return render_template("error.html", message="fruit not in valid options")
    db.execute("INSERT INTO registrants (name, sport) VALUES(?, ?)", name, sport)
    return redirect("/registrants")


@app.route("/registrants")
def registrants():
    registrants = db.execute("SELECT * FROM registrants")
    return render_template("registrants.html", registrants=registrants)


@app.route("/login", methods=["GET", "POST"])
def login():
    if request.method == "POST":
        session["name"] = request.form.get("name")
        return redirect("/")
    return render_template("login.html")


@app.route("/logout")
def logout():
    session.clear()
    return redirect("/")


@app.route("/deregister", methods=["POST"])
def deregister():
    id = request.form.get("id")
    db.execute("DELETE FROM registrants WHERE id = ?", id)
    return redirect("/registrants")
