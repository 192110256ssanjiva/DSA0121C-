body {
  background: linear-gradient(-45deg, #c95b2b, #772544, #457587, #3d7d6e);
  background-size: 400% 400%;
  animation: gradient 15s ease infinite;
  height: 100vh;
}

.heading {
  padding: 0px;
  text-align: center;
  font-size: 30px;
  color: black;
  background: #f05151;
  font-weight: bold;
  display: block;
  animation: gradient 15s ease infinite;
}
.topics {
  text-align: center;
  width: 100%;
}
table,
th,
td {
  border: 1px solid black;
  border-collapse: collapse;
}

th {
  background-color: darkgrey;
}

tr {
  background-color: bisque;
  transition: all 0.4s;
}

tr:hover {
  background-color: lightblue;
}

.center {
  height: 200px;
  width: 100px;
}
.banner {
  width: 100%;
}

.bill {
  width: 50%;
}

.final {
  background-color: #d091cb;
  color: rgb(0, 0, 0);
  width: 50%;
  transition: all 0.4s;
}
.final:hover {
  background-color: #b6e4b5;
  color: rgb(19, 24, 28);
}
@keyframes gradient {
  0% {
    background-position: 0% 50%;
  }
  50% {
    background-position: 100% 50%;
  }
  100% {
    background-position: 0% 50%;
  }
}