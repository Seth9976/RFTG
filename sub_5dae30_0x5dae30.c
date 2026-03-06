// 函数名称: sub_5dae30
// 虚拟地址: 0x5dae30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5dae30(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: uint32_t eax_2 = zx.d((arg3 s>> 0x10).b)
    uint32_t eax_2 = zx.d((arg3 s>> 0x10).b)
    
    if (eax_2 == 0 || eax_2 == 0x45)
        if (arg4 - 0xc u<= 0xf2)
            switch (arg4 + &jump_table_5db158[0x28])
                case &lookup_table_5db204, &lookup_table_5db204[0xf2]
                    return 0x9c
                case &lookup_table_5db204[7]
                    return 0x48
                case &lookup_table_5db204[0x13]
                    return 0x101
                case &lookup_table_5db204[0x1d]
                    return 0x77
                case &lookup_table_5db204[0x1f]
                    return 0x74
                case &lookup_table_5db204[0x23]
                    return 0x75
                case &lookup_table_5db204[0x70]
                    return 0x68
                case &lookup_table_5db204[0x71]
                    return 0x69
                case &lookup_table_5db204[0x72]
                    return 0x6a
                case &lookup_table_5db204[0x73]
                    return 0x6b
                case &lookup_table_5db204[0x74]
                    return 0x6c
                case &lookup_table_5db204[0x75]
                    return 0x6d
                case &lookup_table_5db204[0x76]
                    return 0x6e
                case &lookup_table_5db204[0x77]
                    return 0x6f
                case &lookup_table_5db204[0x78]
                    return 0x70
                case &lookup_table_5db204[0x79]
                    return 0x71
                case &lookup_table_5db204[0x7a]
                    return 0x72
                case &lookup_table_5db204[0x7b]
                    return 0x73
                case &lookup_table_5db204[0x84]
                    return 0x53
                case &lookup_table_5db204[0x86]
                    return 0x67
                case &lookup_table_5db204[0x9a]
                    return 0x10e
                case &lookup_table_5db204[0x9b]
                    return 0x10f
                case &lookup_table_5db204[0x9c]
                    return 0x111
                case &lookup_table_5db204[0x9d]
                    return 0x110
                case &lookup_table_5db204[0x9e]
                    return 0x10c
                case &lookup_table_5db204[0x9f]
                    return 0x112
                case &lookup_table_5db204[0xa0]
                    return 0x10d
                case &lookup_table_5db204[0xa1]
                    return 0x106
                case &lookup_table_5db204[0xa2]
                    return 0x81
                case &lookup_table_5db204[0xa3]
                    return 0x80
                case &lookup_table_5db204[0xa4]
                    return 0x102
                case &lookup_table_5db204[0xa5]
                    return 0x103
                case " !"#$%******************************************&*******************'()*****"
                    return 0x104
                case "!"#$%******************************************&*******************'()*****"
                    return 0x105
                case ""#$%******************************************&*******************'()*****"
                    return 0x109
                case "#$%******************************************&*******************'()*****"
                    return 0x107
                case "$%******************************************&*******************'()*****"
                    return 0x11b
                case "%******************************************&*******************'()*****"
                    return 0x11c
                case "&*******************'()*****"
                    return 0x64
                case "'()*****"
                    return 0x9a
                case "()*****"
                    return 0xa3
                case ")*****"
                    return 0xa4
    else if (eax_2 s<= 0x7f)
        int32_t result = lookup_table_6b6b70[eax_2]
        
        if (((arg3 u>> 0x18).b & 1) != 0)
            if (result - 0x28 u<= 0xba)
                switch (result + &jump_table_5db050[9])
                    case &lookup_table_5db09c
                        return 0x58
                    case &lookup_table_5db09c[0x10]
                        return 0x54
                    case &lookup_table_5db09c[0x11]
                        return 0x57
                    case &lookup_table_5db09c[0xb8]
                        return 0xe4
                    case &lookup_table_5db09c[0xba]
                        return 0xe6
        else if (result - 0x46 u<= 0xc)
            switch (result)
                case 0x46
                    return 0x55
                case 0x49
                    return 0x62
                case 0x4a
                    return 0x5f
                case 0x4b
                    return 0x61
                case 0x4c
                    return 0x63
                case 0x4d
                    return 0x59
                case 0x4e
                    return 0x5b
                case 0x4f
                    return 0x5e
                case 0x50
                    return 0x5c
                case 0x51
                    return 0x5a
                case 0x52
                    return 0x60
        
        return result
    
    return 0
}
