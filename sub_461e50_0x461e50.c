// 函数名称: sub_461e50
// 虚拟地址: 0x461e50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_461e50()
{
    // 第一条实际指令: uint32_t result = data_27c05dc
    uint32_t result = data_27c05dc
    int32_t edi = 0
    uint32_t result_1 = result
    
    if (result s> 0)
        void* esi_1 = &data_bf80d4
        
        do
            int32_t eax = *(esi_1 - 4)
            
            if (eax u> 9)
                sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x6680, "RFTGVRClientDraw")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            result = zx.d(lookup_table_461f78[eax])
            int16_t top
            int16_t top_3
            
            switch (result)
                case 1
                    int32_t var_10
                    sub_461a70(*esi_1, &var_10)
                    float var_8_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x4], st0})
                    unimplemented  {fstp dword [ebp-0x4], st0}
                    unimplemented  {fld st0, dword [ebp-0x4]}
                    int32_t ecx_3 = var_10 - 0x64
                    data_30785b8 = fconvert.s(unimplemented  {fstp dword [0x30785b8], st0})
                    unimplemented  {fstp dword [0x30785b8], st0}
                    top_3 = top + 1
                    data_30785bc = ecx_3
                    int32_t* ecx_4 = *esi_1
                    data_30785b4 = 1
                    result = sub_460fc0(ecx_4)
                label_461ef7:
                    unimplemented  {fldz }
                    data_30785bc = 0
                    data_30785b8 = fconvert.s(unimplemented  {fstp dword [0x30785b8], st0})
                    unimplemented  {fstp dword [0x30785b8], st0}
                    top = top_3
                    data_30785b4 = 0
                case 2
                    int32_t var_c
                    sub_461a70(*esi_1, &var_c)
                    float var_8_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x4], st0})
                    unimplemented  {fstp dword [ebp-0x4], st0}
                    int32_t* ecx_6 = *esi_1
                    int32_t eax_1 = *ecx_6
                    int16_t top_5
                    
                    if (eax_1 != 4)
                        top_5 = top
                        unimplemented  {fld st0, dword [ebp-0x4]}
                        
                        if (eax_1 != 1)
                            data_30785bc = var_c
                        else
                            data_30785bc = var_c + 0x64
                    else
                        top_5 = top
                        unimplemented  {fld st0, dword [ebp-0x4]}
                        unimplemented  {fsub st0, qword [0x8a56b8]}
                        data_30785bc = var_c
                    
                    data_30785b8 = fconvert.s(unimplemented  {fstp dword [0x30785b8], st0})
                    unimplemented  {fstp dword [0x30785b8], st0}
                    top_3 = top_5 + 1
                    data_30785b4 = 1
                    result = sub_461410(ecx_6)
                    goto label_461ef7
            
            edi += 1
            esi_1 += 0x14
        while (edi s< result_1)
    
    return result
}
