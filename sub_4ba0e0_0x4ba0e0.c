// 函数名称: sub_4ba0e0
// 虚拟地址: 0x4ba0e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_4ba0e0(void* arg1, int32_t arg2 @ esi)
{
    // 第一条实际指令: if (*(arg1 + arg2 * 0x50 + 0x38) == 0xffffffff)
    if (*(arg1 + arg2 * 0x50 + 0x38) == 0xffffffff)
        return 2
    
    int32_t edx = *(arg1 + 0x140)
    int32_t eax_2 = 0
    
    if (edx s> 0)
        void* ecx = arg1 + 0x34
        
        do
            if (eax_2 != arg2 && *(ecx + 4) s<= *ecx)
                return 1
            
            eax_2 += 1
            ecx += 0x50
        while (eax_2 s< edx)
    
    return 2
}
