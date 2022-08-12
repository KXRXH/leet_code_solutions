/*
 * @lc app=leetcode id=119 lang=golang
 *
 * [119] Pascal's Triangle II
 */

// @lc code=start
func getRow(rowIndex int) []int {
	triangle := make([][]int, rowIndex+1)
	triangle[0] = []int{1}
	for i := 1; i <= rowIndex; i++ {
		row := []int{1}
		prev := triangle[i-1]
		for k := 1; k < len(prev); k++ {
			row = append(row, prev[k]+prev[k-1])
		}
		triangle[i] = append(row, 1)
	}
	return triangle[rowIndex]
}

// @lc code=end
