import React, { useState } from "react";

export default function DiceGameDemo() {
  const [username, setUsername] = useState("");
  const [loggedIn, setLoggedIn] = useState(false);
  const [balance, setBalance] = useState(1000);
  const [bet, setBet] = useState("");
  const [result, setResult] = useState(null);

  const handleLogin = () => {
    if (username.trim()) setLoggedIn(true);
  };

  const rollDice = () => Math.floor(Math.random() * 6) + 1;

  const playGame = () => {
    const betAmount = parseInt(bet);
    if (!betAmount || betAmount <= 0) {
      alert("Enter a valid bet amount.");
      return;
    }
    if (betAmount > balance) {
      alert("You don't have enough balance.");
      return;
    }

    const dice = rollDice();
    let win = dice >= 4;
    let newBalance = win ? balance + betAmount : balance - betAmount;

    setBalance(newBalance);
    setResult({ dice, win });
  };

  if (!loggedIn) {
    return (
      <div style={{ maxWidth: 400, margin: "auto", textAlign: "center" }}>
        <h2>Welcome to Demo Stake Dice</h2>
        <input
          placeholder="Enter username"
          value={username}
          onChange={(e) => setUsername(e.target.value)}
        />
        <button onClick={handleLogin}>Login</button>
      </div>
    );
  }

  return (
    <div style={{ maxWidth: 400, margin: "auto", textAlign: "center" }}>
      <h2>Hello, {username}!</h2>
      <p>Balance: {balance} points</p>

      <input
        type="number"
        placeholder="Enter your bet"
        value={bet}
        onChange={(e) => setBet(e.target.value)}
        min="1"
        max={balance}
      />
      <button onClick={playGame}>Roll Dice</button>

      {result && (
        <div style={{ marginTop: 20 }}>
          <p>Dice roll: {result.dice}</p>
          {result.win ? (
            <p style={{ color: "green" }}>You won {bet} points!</p>
          ) : (
            <p style={{ color: "red" }}>You lost {bet} points!</p>
          )}
        </div>
      )}
    </div>
  );
}
