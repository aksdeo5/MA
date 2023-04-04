function ChkString(str: string): boolean {
	let word = "Marvellous";
	let words = str.split(" ");

	for (let i = 0; i < words.length; i++) if (words[i] == word) return true;

	return false;
}

let str = "Pune Kothrud Marvellous Infosystems";

if (ChkString(str)) console.log("String contains Marvellous in it.");
else console.log("String does not contain Marvellous in it.");
