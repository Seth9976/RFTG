// 函数名称: sub_670590
// 虚拟地址: 0x670590
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_670590(void* arg1, int32_t arg2, void* arg3)
{
    // 第一条实际指令: void* esi = arg1
    void* esi = arg1
    void* edi = arg3
    
    if (edi s> zx.d(*(esi + 0x12c)))
        return sub_664100(esi, "Invalid number of histogram entries specified")
    
    sub_66f010(esi, edi * 2)
    int32_t ebx_1 = 0
    
    if (edi s> 0)
        do
            uint32_t eax_2 = zx.d(*(arg2 + (ebx_1 << 1)))
            arg1.b = (eax_2 u>> 8).b
            arg1:1.b = eax_2.b
            sub_666640(esi, &arg1, 2)
            sub_662280(esi, &arg1, 2)
            ebx_1 += 1
        while (ebx_1 s< edi)
    
    int32_t eax_3 = *(esi + 0x124)
    arg3.b = (eax_3 u>> 0x18).b
    arg3:1.b = (eax_3 u>> 0x10).b
    *(esi + 0x2ac) = 0x82
    arg3:2.b = (eax_3 u>> 8).b
    arg3:3.b = eax_3.b
    return sub_666640(esi, &arg3, 4)
}
