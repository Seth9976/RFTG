// 函数名称: sub_555010
// 虚拟地址: 0x555010
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_555010(char arg1, void* arg2)
{
    // 第一条实际指令: *(arg2 + 0xc) = *(arg2 + 8)
    *(arg2 + 0xc) = *(arg2 + 8)
    
    while (true)
        char* esi_1 = *(arg2 + 8)
        arg1 = *esi_1
        
        if (arg1 == 0 || arg1 == 0x3c)
            *(arg2 + 0x10) = esi_1 - *(arg2 + 0xc)
            return 1
        
        if (arg1 == 0xa)
            *(arg2 + 0x118) += 1
        
        *(arg2 + 8) = &esi_1[1]
}
