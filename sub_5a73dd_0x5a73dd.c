// 函数名称: sub_5a73dd
// 虚拟地址: 0x5a73dd
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __thiscallsub_5a73dd(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: arg1[3].b = 0
    arg1[3].b = 0
    
    if (arg2 != 0)
        *arg1 = *arg2
        arg1[1] = arg2[1]
    else
        uint32_t* eax_1 = __getptd()
        arg1[2] = eax_1
        *arg1 = eax_1[0x1b]
        arg1[1] = eax_1[0x1a]
        
        if (*arg1 != data_8b8c98 && (eax_1[0x1c] & data_8b8a50) == 0)
            *arg1 = sub_5aebe7()
        
        if (arg1[1] != data_8b8958 && (*(arg1[2] + 0x70) & data_8b8a50) == 0)
            arg1[1] = sub_5ae466()
        
        void* eax_6 = arg1[2]
        
        if ((*(eax_6 + 0x70) & 2) == 0)
            *(eax_6 + 0x70) |= 2
            arg1[3].b = 1
    
    return arg1
}
