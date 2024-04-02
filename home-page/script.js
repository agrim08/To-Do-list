document.querySelector(".submit").addEventListener("click", () => {
  alert("Your feedback is recorded");
});
// function ClearFields() {
//   document.getElementById("feedbackd").value = "";
// }

const todosArr = [];

function addsNewTodo() {
  const inputFeild = document.getElementById("todo-title");
  todosArr.push(inputFeild.value);

  // I'm using keycode for Enter key
  // this will check if the user presses on Enter key
  // then it'll clear the input field ( inputFeil.value )

  if (event.keyCode === 13) {
    inputFeild.value = "";
  }
}
