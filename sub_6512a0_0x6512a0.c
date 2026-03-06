// 函数名称: sub_6512a0
// 虚拟地址: 0x6512a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6512a0(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: if (*(arg1 + 8) s> 0)
    if (*(arg1 + 8) s> 0)
        int32_t eax_2 = sub_651170(arg1, arg2)
        
        if (eax_2 s>= 0)
            return *(*(arg1 + 0x18) + (eax_2 << 2))
    
    return 0xffffffff
}
