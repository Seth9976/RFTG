// 函数名称: sub_645160
// 虚拟地址: 0x645160
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_645160(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: char* const var_8 = &data_83f3d3
    char* const var_8 = &data_83f3d3
    
    if (arg2 == 0)
        return arg2 + 1
    
    (*arg1)()
    
    if (arg1[0xe] != 0)
        var_8 = "#define sampler2D sampler2DRect\n#define texture2D texture2DRect\n"
    
    int32_t* entry_ebx
    *entry_ebx = arg1[3]()
    entry_ebx[1] = arg1[4](0x8b31)
    
    if (sub_6450c0(arg1, &data_83f3d3, *((arg2 << 3) + &data_8bb8c4)) != 0)
        entry_ebx[2] = arg1[4](0x8b30)
        
        if (sub_6450c0(arg1, var_8, *((arg2 << 3) + &data_8bb8c8)) != 0)
            arg1[1](*entry_ebx, entry_ebx[1])
            arg1[1](*entry_ebx, entry_ebx[2])
            arg1[9](*entry_ebx)
            arg1[0xd](*entry_ebx)
            
            for (int32_t i = 0; i s< 4; i += 1)
                int32_t i_1 = i
                char var_14
                sub_5ce6a0(&var_14, 0xa, "tex%d")
                int32_t eax_12 = arg1[8](*entry_ebx, &var_14)
                
                if (eax_12 s>= 0)
                    arg1[0xb](eax_12, i)
            
            arg1[0xd](0)
            int32_t eax_14 = (*arg1)()
            int32_t eax_15 = neg.d(eax_14)
            return sbb.d(eax_15, eax_15, eax_14 != 0) + 1
    
    return 0
}
