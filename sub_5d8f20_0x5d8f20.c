// 函数名称: sub_5d8f20
// 虚拟地址: 0x5d8f20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_5d8f20(int32_t arg1, void* arg2, int32_t arg3 @ esi)
{
    // 第一条实际指令: int32_t ecx = *(arg2 + 0x70)
    int32_t ecx = *(arg2 + 0x70)
    int32_t eax = 0
    
    if (ecx != 0)
        void* edx = arg2 + 0x74
        
        do
            if (*edx == arg3)
                return 1
            
            eax += 1
            edx += 4
        while (eax u< ecx)
    
    return 0
}
