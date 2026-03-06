// 函数名称: sub_5d63b0
// 虚拟地址: 0x5d63b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5d63b0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t* arg4 @ esi, void* arg5 @ edi, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9, int32_t* arg10)
{
    // 第一条实际指令: int32_t eax_4
    int32_t eax_4
    
    if (arg3 == 0 || (arg3 & 0xf0000000) == 0x10000000)
        eax_4 = arg3 u>> 0x18 & 0xf
    
    if ((arg3 == 0 || (arg3 & 0xf0000000) == 0x10000000) && (eax_4 == 1 || eax_4 == 2 || eax_4 == 3))
        sub_5cce60("Indexed pixel formats not supported")
    else if (sub_5d7a50(arg10, arg3) s>= 0)
        int32_t var_c_2 = 0x3c
        int32_t var_10_2 = 0
        int32_t* var_14 = arg4
        sub_5cd100()
        int32_t var_18 = 0x58
        arg4[5] = arg8
        int32_t var_1c = 0
        void* var_20 = arg5
        *arg4 = 1
        arg4[1] = arg10
        arg4[2] = arg6
        arg4[3] = arg7
        arg4[4] = arg9
        sub_5cd100()
        *(arg5 + 0x4c) = 0xffffffff
        arg4[0xd] = arg5
        arg4[0xe] = 1
        return 1
    
    return 0
}
