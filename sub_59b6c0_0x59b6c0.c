// 函数名称: sub_59b6c0
// 虚拟地址: 0x59b6c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_59b6c0(int32_t* arg1, int32_t* arg2 @ esi, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    
    if (sub_59aa60(arg2, 0) != 0)
        int32_t* eax_1 = *arg2
        result = arg2[3]
        *arg3 = *eax_1
        int32_t ecx_2 = eax_1[1]
        arg2[3] = 0
        *arg4 = ecx_2
        
        if (arg1 != 0)
            *arg1 = eax_1[2]
    
    __free_base(arg2[3])
    int32_t edx_3 = arg2[2]
    arg2[3] = 0
    __free_base(edx_3)
    int32_t eax_3 = arg2[1]
    arg2[2] = 0
    __free_base(eax_3)
    arg2[1] = 0
    return result
}
