// 函数名称: sub_60e760
// 虚拟地址: 0x60e760
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_60e760(int32_t arg1)
{
    // 第一条实际指令: void* esi = *(arg1 + 0x134)
    void* esi = *(arg1 + 0x134)
    
    if (*(esi + 0x4c) == 0)
        int32_t* eax_1 = *(esi + 8)
        (*(*eax_1 + 0xa8))(eax_1)
        *(esi + 0x4c) = 1
    
    int32_t* eax_2 = *(esi + 8)
    int32_t result = (*(*eax_2 + 0xc))(eax_2)
    
    if (result != 0x88760868)
        if (result == 0x88760869)
            sub_60d8c0(arg1)
        
        int32_t* esi_1 = *(esi + 8)
        int32_t edx_3
        result, edx_3 = (*(*esi_1 + 0x44))(esi_1, 0, 0, 0, 0)
        
        if (result s< 0)
            char const* const var_10_4 = "Present()"
            return sub_60c740(result, edx_3)
    
    return result
}
