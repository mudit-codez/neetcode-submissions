class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stack = []

        for st in tokens:
            if st == "+" or st == "-" or st == "*" or st == "/":
                first_el = int(stack.pop())
                second_el = int(stack.pop())
                ans = 0
                if st == "+":
                    ans = second_el + first_el
                elif st == "-":
                    ans = second_el - first_el
                elif st == "*":
                    ans = second_el * first_el
                else:
                    ans = int(second_el / first_el)

                stack.append(str(ans))

            else:
                stack.append(st)

        ans = int(stack.pop())
        return ans
