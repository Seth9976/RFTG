// 函数名称: sub_4185e0
// 虚拟地址: 0x4185e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __fastcallsub_4185e0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: void* ecx = *(data_27e7a40 + 0x548)
    void* ecx = *(data_27e7a40 + 0x548)
    
    if (arg2 != 0)
        uint32_t eax_1 = zx.d(arg2.w)
        
        if (eax_1 u< *(ecx + 0x43964))
            void* eax_3 = eax_1 * 0xb0 + *(ecx + 0x43960)
            int32_t ecx_1
            ecx_1.b = *(eax_3 + 0xac) != arg2
            return eax_3 & (ecx_1 - 1)
    
    return 0
}
