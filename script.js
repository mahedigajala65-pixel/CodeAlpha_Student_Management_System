function addStudent() {
  let name = document.getElementById("name").value;
  let list = document.getElementById("list");

  if (name === "") {
    alert("Please enter student name");
    return;
  }

  let li = document.createElement("li");
  li.innerHTML = name + " <button onclick='this.parentElement.remove()'>Delete</button>";

  list.appendChild(li);

  document.getElementById("name").value = "";
}