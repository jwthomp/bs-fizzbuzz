
let get (value: int): string => {
	switch value {
	| _ when value mod 15 === 0 => "FizzBuzz"
	| _ when value mod 3  === 0 => "Fizz"
	| _ when value mod 5  === 0 => "Buzz"
	| _                         => string_of_int value
	};
};
