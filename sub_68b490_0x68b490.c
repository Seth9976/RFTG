// 函数名称: sub_68b490
// 虚拟地址: 0x68b490
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_68b490(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* eax = arg1[0x10]
    int32_t* ecx_1 = *(eax + 0x68)
    int32_t eax_1 = *(*(eax + 4) + 0x1c)
    sub_649b40(arg1)
    sub_68af60(&arg1[1], *arg2, arg2[1])
    
    if (sub_68b0a0(&arg1[1], 1) != 0)
        return 0xffffff79
    
    int32_t eax_5 = sub_68b0a0(&arg1[1], ecx_1[0xb])
    
    if (eax_5 != 0xffffffff)
        arg1[0xa] = eax_5
        int32_t* eax_6 = *(eax_1 + (eax_5 << 2) + 0x20)
        
        if (eax_6 != 0)
            int32_t eax_7 = *eax_6
            arg1[7] = eax_7
            
            if (eax_7 == 0)
                arg1[6] = 0
                arg1[8] = 0
            label_68b545:
                arg1[0xc] = arg2[4]
                arg1[0xd] = arg2[5]
                arg1[0xe] = arg2[6]
                arg1[0xf] = arg2[7]
                arg1[0xb] = arg2[3]
                arg1[9] = 0
                *arg1 = 0
                return 0
            
            arg1[6] = sub_68b0a0(&arg1[1], 1)
            int32_t eax_9 = sub_68b0a0(&arg1[1], 1)
            arg1[8] = eax_9
            
            if (eax_9 != 0xffffffff)
                goto label_68b545
    
    return 0xffffff78
}
