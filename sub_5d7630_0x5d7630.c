// 函数名称: sub_5d7630
// 虚拟地址: 0x5d7630
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d7630(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: if (arg1 - 1 u<= 0x1f)
    if (arg1 - 1 u<= 0x1f)
        switch (arg1 + &jump_table_5d7a08[8]:3)
            case &lookup_table_5d7a2c
                return 0x11200100
            case &lookup_table_5d7a2c[3]
                return 0x12200400
            case &lookup_table_5d7a2c[7]
                if (arg2 == 0)
                    return 0x13000801
                
                if (arg2 == 0xe0 && arg3 == 0x1c && arg4 == 3 && arg5 == 0)
                    return 0x14110801
            case &lookup_table_5d7a2c[0xb]
                if (arg2 == 0)
                    return 0x15120c02
                
                if (arg2 == 0xf00 && arg3 == 0xf0 && arg4 == 0xf && arg5 == 0)
                    return 0x15120c02
            case &lookup_table_5d7a2c[0xe]
                if (arg2 == 0)
                    return 0x15130f02
                
                goto label_5d76e9
            case &lookup_table_5d7a2c[0xf]
                if (arg2 == 0)
                    return 0x15151002
                
            label_5d76e9:
                
                if (arg2 != 0x7c00)
                    if (arg2 != 0x1f)
                        if (arg2 != 0xf00)
                            if (arg2 != 0xf000)
                                if (arg2 != 0xf)
                                    if (arg2 != 0xf0)
                                        if (arg2 != 0xf800)
                                            if (arg2 == 0x3e && arg3 == 0x7c0 && arg4 == 0xf800
                                                    && arg5 == 1)
                                                return 0x15841002
                                        else if (arg3 != 0x7c0)
                                            if (arg3 == 0x7e0 && arg4 == 0x1f && arg5 == 0)
                                                return 0x15151002
                                        else if (arg4 == 0x3e && arg5 == 1)
                                            return 0x15441002
                                    else if (arg3 == 0xf00 && arg4 == 0xf000 && arg5 == 0xf)
                                        return 0x15821002
                                else if (arg3 == 0xf0 && arg4 == 0xf00 && arg5 == 0xf000)
                                    return 0x15721002
                            else if (arg3 == 0xf00 && arg4 == 0xf0 && arg5 == 0xf)
                                return 0x15421002
                        else if (arg3 == 0xf0 && arg4 == 0xf && arg5 == 0xf000)
                            return 0x15321002
                    else if (arg3 != 0x3e0)
                        if (arg3 == 0x7e0 && arg4 == 0xf800 && arg5 == 0)
                            return 0x15551002
                    else if (arg4 == 0x7c00)
                        if (arg5 == 0)
                            return 0x15530f02
                        
                        if (arg5 == 0x8000)
                            return 0x15731002
                else if (arg3 == 0x3e0 && arg4 == 0x1f)
                    if (arg5 == 0)
                        return 0x15130f02
                    
                    if (arg5 == 0x8000)
                        return 0x15331002
            case &lookup_table_5d7a2c[0x17]
                if (arg2 == 0)
                    return 0x17401803
                
                if (arg2 == 0xff)
                    return 0x17101803
                
                if (arg2 == 0xff0000)
                    return 0x17401803
                
                goto label_5d78e6
            case &lookup_table_5d7a2c[0x1f]
            label_5d78e6:
                
                if (arg2 == 0)
                    return 0x16161804
                
                if (arg2 != 0xff0000)
                    if (arg2 != 0xff000000)
                        if (arg2 != 0xff)
                            if (arg2 != 0xff00)
                                if (arg2 == 0x3ff00000 && arg3 == 0xffc00 && arg4 == 0x3ff
                                        && arg5 == 0xc0000000)
                                    return 0x16372004
                            else if (arg3 == 0xff0000 && arg4 == 0xff000000)
                                if (arg5 == 0)
                                    return 0x16661804
                                
                                if (arg5 == 0xff)
                                    return 0x16862004
                        else if (arg3 == 0xff00 && arg4 == 0xff0000)
                            if (arg5 == 0)
                                return 0x16561804
                            
                            if (arg5 == 0xff000000)
                                return 0x16762004
                    else if (arg3 == 0xff0000 && arg4 == 0xff00)
                        if (arg5 == 0)
                            return 0x16261804
                        
                        if (arg5 == 0xff)
                            return 0x16462004
                else if (arg3 == 0xff00 && arg4 == 0xff)
                    if (arg5 == 0)
                        return 0x16161804
                    
                    if (arg5 == 0xff000000)
                        return 0x16362004
    
    return 0
}
