// 函数名称: sub_49abb0
// 虚拟地址: 0x49abb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_49abb0(int32_t* arg1, void* arg2, int32_t arg3)
{
    // 第一条实际指令: switch (arg3)
    switch (arg3)
        case 0
            int32_t eax_2
            eax_2.b = *arg1 - 2 u<= 4
            return eax_2
        case 1
            if (*arg1 == 1)
                arg1.b = 1
                return arg1
        case 5
            int32_t eax_3 = *arg1
            
            if (eax_3 == 7)
                int32_t eax_4
                eax_4.b = *(arg2 + 0x1ec0)
                
                if (eax_4.b != 3 && eax_4.b != 4)
                    return 0
                
                return 1
            
            if (eax_3 == 8)
                arg1.b = *(arg2 + 0x1ec0)
                
                if (arg1.b != 5 && arg1.b != 6)
                    return 0
                
                return 1
        case 6
            arg1.b = *arg1 == 9
            return arg1
    
    arg1.b = 0
    return arg1
}
