// 函数名称: sub_446e50
// 虚拟地址: 0x446e50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_446e50(void* arg1)
{
    // 第一条实际指令: int32_t esi = *(arg1 + 4)
    int32_t esi = *(arg1 + 4)
    void* edi = *(data_27e7a40 + 0x548)
    int32_t var_10 = 0
    int32_t var_c = 0
    int32_t var_8 = 0
    var_10 = 3
    int32_t var_c_1 = esi
    sub_445e20(sub_463f60(edi + 0x43960, esi))
    void* eax_2 = data_27e7a40
    void* edx = *(eax_2 + 0x548)
    sub_472e60(*(eax_2 + 0x74), edx, &var_10, edx)
    int32_t result = *(edi + 0xbfd0)
    *(edi + 0xc020) = result
    *(edi + 0xbff8) = 0
    return result
}
