// 函数名称: sub_5c6cf0
// 虚拟地址: 0x5c6cf0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c6cf0(int32_t* arg1, char arg2, char arg3)
{
    // 第一条实际指令: uint32_t eax = zx.d(arg2)
    uint32_t eax = zx.d(arg2)
    
    if (eax s>= arg1[4])
        return 0
    
    int32_t ebx
    ebx.b = arg3
    *(eax + arg1[5]) = ebx.b
    
    if (sub_5c6c20() != 0 && (arg1[0xc].b == 0 || *(arg1 + 0x31) == 0))
        return 0
    
    if (sub_5c7830(0x602, 0xffffffff) != 1)
        return 0
    
    int32_t edx_1 = *arg1
    int32_t var_3c = 0x602
    int32_t var_34_1 = edx_1
    char var_30_1 = arg2
    char var_2f_1 = ebx.b
    int32_t esi_1 = sub_5c76a0(&var_3c) - 1
    int32_t esi_2 = neg.d(esi_1)
    return sbb.d(esi_2, esi_2, esi_1 != 0) + 1
}
