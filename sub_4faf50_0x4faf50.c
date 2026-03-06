// 函数名称: sub_4faf50
// 虚拟地址: 0x4faf50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_4faf50(int32_t arg1, int32_t arg2, int32_t arg3, int32_t* arg4 @ edi, float arg5)
{
    // 第一条实际指令: void var_18
    void var_18
    int32_t* eax_3 = sub_4f4990(arg5, &var_18, 
        arg1 * 0x118 + *sub_4f4890(*(sub_4fc3d0(&data_be1cb8, arg3) + 4)) + 0x1c, &var_18, arg5)
    int32_t edx_1 = eax_3[1]
    *arg4 = *eax_3
    int32_t ecx_2 = eax_3[2]
    arg4[1] = edx_1
    int32_t edx_2 = eax_3[3]
    arg4[2] = ecx_2
    arg4[3] = edx_2
    return arg4
}
