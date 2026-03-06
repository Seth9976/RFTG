// 函数名称: sub_4f52e0
// 虚拟地址: 0x4f52e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_4f52e0(float arg1 @ eax, int32_t* arg2 @ esi, void* arg3 @ edi, char arg4)
{
    // 第一条实际指令: int32_t* eax_1
    int32_t* eax_1
    float var_18
    int32_t edx
    
    if (arg4 == 0)
        void var_28
        float* eax_3 = sub_4f4990(&var_28, edx, arg3 + 0x1c, &var_28, arg1)
        int32_t edx_1 = eax_3[1]
        var_18 = *eax_3
        int32_t var_14_1 = edx_1
        int32_t var_10_1 = eax_3[2]
        int32_t var_c_1 = eax_3[3]
        float var_38[0x4]
        eax_1 = &var_38
        sub_4fc810(eax_1, arg3 + 0x74, &var_18)
    else
        eax_1 = sub_4f4990(&var_18, edx, arg3 + 0x1c, &var_18, arg1)
    int32_t edx_4 = eax_1[1]
    *arg2 = *eax_1
    int32_t ecx_5 = eax_1[2]
    arg2[1] = edx_4
    int32_t edx_5 = eax_1[3]
    arg2[2] = ecx_5
    arg2[3] = edx_5
    return arg2
}
