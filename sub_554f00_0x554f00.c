// 函数名称: sub_554f00
// 虚拟地址: 0x554f00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_554f00(int32_t arg1, void* arg2)
{
    // 第一条实际指令: while (true)
    while (true)
        char* ecx_1 = *(arg2 + 8)
        char result = *ecx_1
        
        if (result != 0x20 && result != 9 && result != 0xd && result != 0xa)
            return result
        
        if (result == 0xa)
            *(arg2 + 0x118) += 1
        
        *(arg2 + 8) = &ecx_1[1]
}
