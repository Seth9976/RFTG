// 函数名称: sub_5d0bb0
// 虚拟地址: 0x5d0bb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d0bb0(char arg1, uint32_t arg2)
{
    // 第一条实际指令: uint32_t esi = arg2
    uint32_t esi = arg2
    
    if (esi == 0)
        return 0
    
    if (arg1 != 1)
        if (esi - 0xe0 u<= 0x21)
            switch (&lookup_table_5d0e20[0x14 + esi])
                case &lookup_table_5d0f14
                    data_bedd6c &= 0xffbf
                case &lookup_table_5d0f14[1]
                    data_bedd6c &= 0xfffe
                case &lookup_table_5d0f14[2]
                    data_bedd6c &= 0xfeff
                case &lookup_table_5d0f14[3]
                    data_bedd6c &= 0xfbff
                case &lookup_table_5d0f14[4]
                    data_bedd6c &= 0xff7f
                case &lookup_table_5d0f14[5]
                    data_bedd6c &= 0xfffd
                case &lookup_table_5d0f14[6]
                    data_bedd6c &= 0xfdff
                case &lookup_table_5d0f14[7]
                    data_bedd6c &= 0xf7ff
                case &lookup_table_5d0f14[0x21]
                    data_bedd6c &= 0xbfff
        
        arg2 = zx.d(data_bedd6c)
    else
        arg2 = zx.d(data_bedd6c)
        
        if (esi - 0x39 u<= 0xc8)
            switch (esi)
                case 0x39
                    data_bedd6c ^= 0x2000
                case 0x53
                    data_bedd6c ^= 0x1000
                case 0xe0
                    data_bedd6c |= 0x40
                case 0xe1
                    data_bedd6c |= 1
                case 0xe2
                    data_bedd6c |= 0x100
                case 0xe3
                    data_bedd6c |= 0x400
                case 0xe4
                    data_bedd6c |= 0x80
                case 0xe5
                    data_bedd6c |= 2
                case 0xe6
                    data_bedd6c |= 0x200
                case 0xe7
                    data_bedd6c |= 0x800
                case 0x101
                    data_bedd6c |= 0x4000
    
    uint32_t eax_6 = zx.d(arg1)
    int32_t edi
    
    if (eax_6 == 0)
        edi = 0x301
    else
        if (eax_6 != 1)
            return 0
        
        edi = 0x300
    
    int32_t ebx
    
    if (arg1 == 0 || *(esi + 0xbedd6e) == 0)
        ebx.b = 0
    else
        ebx.b = 1
    
    if (*(esi + 0xbedd6e) == arg1 && ebx.b == 0)
        return 0
    
    *(esi + 0xbedd6e) = arg1
    int32_t var_8 = 0
    
    if (sub_5c7830(edi, 0xffffffff).b != 1)
        return var_8
    
    int32_t edx_3 = *((esi << 2) + &data_bedf70)
    int16_t var_28 = arg2.w
    void* eax_12 = data_bedd68
    int32_t var_40 = edi
    char var_34 = arg1
    char var_33 = ebx.b
    uint32_t var_30 = esi
    int32_t var_2c = edx_3
    
    if (eax_12 == 0)
        int32_t var_38_1 = 0
    else
        int32_t var_38 = *(eax_12 + 4)
    
    int32_t ecx_3
    ecx_3.b = sub_5c76a0(&var_40) s> 0
    return ecx_3
}
