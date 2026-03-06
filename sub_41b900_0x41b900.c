// 函数名称: sub_41b900
// 虚拟地址: 0x41b900
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_41b900(int32_t arg1, void* arg2, int32_t* arg3 @ esi)
{
    // 第一条实际指令: int32_t i = 0
    int32_t i = 0
    
    if (*(arg2 + 0x458) s> 0)
        void* ecx = arg2 + 0xaa
        
        do
            arg3[i] = sx.d(*ecx)
            i += 1
            ecx += 0xb4
        while (i s< sx.d(*(arg2 + 0x458)))
    
    void* eax_1 = &arg3[sx.d(*(arg2 + 0x458))]
    return sub_463fe0(arg3, eax_1, (eax_1 - arg3) s>> 2)
}
