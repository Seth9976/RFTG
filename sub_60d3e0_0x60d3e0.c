// 函数名称: sub_60d3e0
// 虚拟地址: 0x60d3e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_60d3e0(void* arg1)
{
    // 第一条实际指令: void* edi = *(arg1 + 0x134)
    void* edi = *(arg1 + 0x134)
    
    if (arg1 == 0xffffff0c || *(arg1 + 0xfc) s<= 0 || *(arg1 + 0x100) s<= 0)
        int32_t* edi_1 = *(edi + 8)
        (*(*edi_1 + 0xe4))(edi_1, 0xae, 0)
    else
        int32_t* eax_1 = *(edi + 8)
        (*(*eax_1 + 0xe4))(eax_1, 0xae, 1)
        int32_t eax_2 = *(arg1 + 0xf4)
        int32_t ecx_1 = *(arg1 + 0xf8)
        int32_t edx_2 = *(arg1 + 0xfc) + eax_2
        int32_t var_14 = eax_2
        int32_t var_c_1 = edx_2
        int32_t var_10_1 = ecx_1
        int32_t var_8_1 = *(arg1 + 0x100) + ecx_1
        int32_t* eax_5 = *(edi + 8)
        int32_t eax_7
        int32_t edx_3
        eax_7, edx_3 = (*(*eax_5 + 0x12c))(eax_5, &var_14)
        
        if (eax_7 != 0)
            char const* const var_20_2 = "SetScissor()"
            sub_60c740(eax_7, edx_3)
            return 0xffffffff
    
    return 0
}
