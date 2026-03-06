// 函数名称: sub_60da20
// 虚拟地址: 0x60da20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_60da20(void* arg1, void* arg2)
{
    // 第一条实际指令: void* edi = *(arg1 + 0x134)
    void* edi = *(arg1 + 0x134)
    void* var_10 = arg1
    int32_t ecx
    sub_60d940(ecx)
    int32_t* eax_1 = *(edi + 0x78)
    
    if (eax_1 != 0)
        (*(*eax_1 + 8))(eax_1)
        *(edi + 0x78) = 0
    
    if (arg2 != 0)
        int32_t* eax_7 = **(arg2 + 0x44)
        int32_t eax_8
        int32_t edx_4
        eax_8, edx_4 = (*(*eax_7 + 0x48))(eax_7, 0, edi + 0x78)
        
        if (eax_8 s< 0)
            char const* const var_10_4 = "GetSurfaceLevel()"
            sub_60c740(eax_8, edx_4)
            return 0xffffffff
        
        int32_t* edi_1 = *(edi + 8)
        int32_t eax_10
        int32_t edx_6
        eax_10, edx_6 = (*(*edi_1 + 0x94))(edi_1, 0, *(edi + 0x78))
        
        if (eax_10 s< 0)
            char const* const var_10_6 = "SetRenderTarget()"
            sub_60c740(eax_10, edx_6)
            return 0xffffffff
    else
        int32_t* eax_3 = *(edi + 8)
        (*(*eax_3 + 0x94))(eax_3, 0, *(edi + 0x74))
    
    return 0
}
