// 函数名称: sub_4f6200
// 虚拟地址: 0x4f6200
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4f6200(int32_t arg1, int32_t arg2, float arg3 @ ecx, int32_t* arg4, int32_t arg5, float* arg6)
{
    // 第一条实际指令: if (*(data_27e7bbc + 0x18) == 0)
    if (*(data_27e7bbc + 0x18) == 0)
        int32_t result
        result.b = 0
        return result
    
    int32_t* eax_1 = sub_4f5350(arg5, arg2, arg4, arg3)
    int32_t ecx_1 = eax_1[1]
    float var_18 = *eax_1
    int32_t var_14 = ecx_1
    int32_t var_10 = eax_1[2]
    int32_t var_c = eax_1[3]
    return sub_4057a0(&var_18, arg6)
}
