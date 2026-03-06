// 函数名称: sub_602eb0
// 虚拟地址: 0x602eb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __stdcallsub_602eb0(void* arg1, int32_t* arg2, int32_t* arg3, char arg4)
{
    // 第一条实际指令: void* esi = *(arg1 + 8)
    void* esi = *(arg1 + 8)
    int32_t eax_1 = sub_5cd130(0x6b8f78, arg3, 0x10)
    int32_t eax_2 = neg.d(eax_1)
    *(esi + 0x14b0) = neg.d(sbb.d(eax_2, eax_2, eax_1 != 0))
    
    if (sub_5cd130(arg2, "c\t4", 0x10) == 0 && (arg4 & 1) != 0)
        sub_602790(*(arg1 + 8))
    
    sub_602810(esi)
    return 0
}
