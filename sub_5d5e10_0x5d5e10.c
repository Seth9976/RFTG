// 函数名称: sub_5d5e10
// 虚拟地址: 0x5d5e10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d5e10(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: if (arg1 != 0)
    if (arg1 != 0)
        void* eax_2 = *(arg1 + 0x34)
        
        if ((*(eax_2 + 0x44) & 0x100) != 0)
            if (arg2 != 0)
                *arg2 = *(eax_2 + 0x48)
            
            return 0
    
    return 0xffffffff
}
