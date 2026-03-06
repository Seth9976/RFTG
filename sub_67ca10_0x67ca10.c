// 函数名称: sub_67ca10
// 虚拟地址: 0x67ca10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_67ca10(int32_t arg1, void* arg2)
{
    // 第一条实际指令: if (*(arg2 + 0x4c) == 0 && *(arg2 + 0x12c) == 0 && *(arg2 + 0x28) == 3 && *(arg2 + 0x24) == 3 && *(arg2 + 0x2c) == 2 && *(arg2 + 0x78) == 3)
    if (*(arg2 + 0x4c) == 0 && *(arg2 + 0x12c) == 0 && *(arg2 + 0x28) == 3 && *(arg2 + 0x24) == 3
            && *(arg2 + 0x2c) == 2 && *(arg2 + 0x78) == 3)
        void* ecx = *(arg2 + 0xd8)
        
        if (*(ecx + 8) == 2 && *(ecx + 0x5c) == 1 && *(ecx + 0xb0) == 1 && *(ecx + 0xc) s<= 2
                && *(ecx + 0x60) == 1 && *(ecx + 0xb4) == 1)
            int32_t edx = *(arg2 + 0x13c)
            
            if (*(ecx + 0x24) == edx && *(ecx + 0x78) == edx && *(ecx + 0xcc) == edx)
                return 1
    
    return 0
}
