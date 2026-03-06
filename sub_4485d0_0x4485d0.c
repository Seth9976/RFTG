// 函数名称: sub_4485d0
// 虚拟地址: 0x4485d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4485d0(int32_t arg1)
{
    // 第一条实际指令: void* eax_1 = *(data_27e7a40 + 0x548)
    void* eax_1 = *(data_27e7a40 + 0x548)
    
    if (*(eax_1 + 0xbfac) != 0)
        return sub_447b40() __tailcall
    
    int32_t* eax_3 = sub_463f60(eax_1 + 0x43960, arg1)
    
    if (*eax_3 == 1)
        void* eax_5 = sub_418870(eax_3[0x1f])
        return sub_4474b0(sub_463f60(*(data_27e7a40 + 0x548) + 0x43960, *(eax_5 + 0xac))) __tailcall
    
    int32_t result = eax_3[0x17]
    
    if (result == 0x12 || result == 0x13)
        return sub_4474b0(eax_3) __tailcall
    
    if (eax_3[0x1f] s> 0x1f4)
        return result
    
    return sub_4474b0(eax_3) __tailcall
}
