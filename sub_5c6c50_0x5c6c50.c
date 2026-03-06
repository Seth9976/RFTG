// 函数名称: sub_5c6c50
// 虚拟地址: 0x5c6c50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c6c50(int32_t* arg1, char arg2, int16_t arg3)
{
    // 第一条实际指令: uint32_t eax = zx.d(arg2)
    uint32_t eax = zx.d(arg2)
    
    if (eax s>= arg1[2])
        return 0
    
    int32_t ecx = arg1[3]
    int32_t ebx
    ebx.w = arg3
    
    if (ebx.w != *(ecx + (eax << 1)))
        *(ecx + (eax << 1)) = ebx.w
        
        if (sub_5c6c20() == 0)
        label_5c6ca3:
            
            if (sub_5c7830(0x600, 0xffffffff) != 1)
                return 0
            
            int32_t edx_1 = *arg1
            int32_t var_3c = 0x600
            int32_t var_34_1 = edx_1
            char var_30_1 = arg2
            int16_t var_2c_1 = ebx.w
            int32_t esi_1 = sub_5c76a0(&var_3c) - 1
            int32_t esi_2 = neg.d(esi_1)
            return sbb.d(esi_2, esi_2, esi_1 != 0) + 1
        
        if (arg1[0xc].b != 0 && *(arg1 + 0x31) != 0)
            goto label_5c6ca3
    
    return 0
}
