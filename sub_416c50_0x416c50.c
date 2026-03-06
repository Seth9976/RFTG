// 函数名称: sub_416c50
// 虚拟地址: 0x416c50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_416c50(float arg1 @ eax, int32_t arg2, int32_t* arg3, float* arg4)
{
    // 第一条实际指令: int32_t* eax_1 = sub_4f5350(arg3[1], arg2, *arg3, arg1)
    int32_t* eax_1 = sub_4f5350(arg3[1], arg2, *arg3, arg1)
    int32_t edx = eax_1[1]
    float var_18 = *eax_1
    int32_t var_14 = edx
    int32_t var_c = eax_1[3]
    float var_10_1 = fconvert.s(fconvert.t(eax_1[2]) + fconvert.t(100000.0))
    return sub_4057a0(&var_18, arg4)
}
