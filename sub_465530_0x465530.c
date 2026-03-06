// 函数名称: sub_465530
// 虚拟地址: 0x465530
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_465530(int32_t* arg1, int32_t* arg2 @ esi, int32_t* arg3 @ edi, int32_t arg4)
{
    // 第一条实际指令: if (arg4(arg2, arg3) != 0)
    if (arg4(arg2, arg3) != 0)
        int32_t edx_1 = arg2[2]
        int32_t eax_1 = *arg2
        int32_t ecx_1 = arg2[1]
        int32_t edx_2 = arg2[3]
        int32_t edx_3 = arg2[4]
        *arg2 = *arg3
        arg2[1] = arg3[1]
        arg2[2] = arg3[2]
        arg2[3] = arg3[3]
        arg2[4] = arg3[4]
        *arg3 = eax_1
        arg3[1] = ecx_1
        arg3[2] = edx_1
        arg3[3] = edx_2
        arg3[4] = edx_3
    
    if (arg4(arg1, arg2) != 0)
        int32_t edx_10 = arg1[2]
        int32_t eax_4 = *arg1
        int32_t ecx_3 = arg1[1]
        int32_t edx_11 = arg1[3]
        int32_t edx_12 = arg1[4]
        *arg1 = *arg2
        arg1[1] = arg2[1]
        arg1[2] = arg2[2]
        arg1[3] = arg2[3]
        arg1[4] = arg2[4]
        *arg2 = eax_4
        arg2[1] = ecx_3
        arg2[2] = edx_10
        arg2[3] = edx_11
        arg2[4] = edx_12
    
    int32_t result = arg4(arg2, arg3)
    
    if (result.b != 0)
        int32_t result_1 = arg2[3]
        int32_t eax_6 = *arg2
        int32_t ecx_5 = arg2[1]
        int32_t edx_19 = arg2[2]
        int32_t ebx_1 = arg2[4]
        *arg2 = *arg3
        arg2[1] = arg3[1]
        arg2[2] = arg3[2]
        arg2[3] = arg3[3]
        arg2[4] = arg3[4]
        *arg3 = eax_6
        result = result_1
        arg3[1] = ecx_5
        arg3[2] = edx_19
        arg3[3] = result
        arg3[4] = ebx_1
    
    return result
}
