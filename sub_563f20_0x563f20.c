// 函数名称: sub_563f20
// 虚拟地址: 0x563f20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __fastcallsub_563f20(int32_t arg1, void* arg2)
{
    // 第一条实际指令: if (arg1 != 0)
    if (arg1 != 0)
        uint32_t eax_2 = zx.d(arg1.w)
        
        if (eax_2 u< *(arg2 + 4))
            void* eax_4 = eax_2 * 0x24c + *arg2
            int32_t edx
            edx.b = *(eax_4 + 0x248) != arg1
            return eax_4 & (edx - 1)
    
    return 0
}
