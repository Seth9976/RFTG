// 函数名称: sub_62dbf0
// 虚拟地址: 0x62dbf0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_62dbf0(uint32_t arg1)
{
    // 第一条实际指令: int32_t* eax = arg1
    int32_t* eax = arg1
    int32_t ecx = eax[6]
    uint32_t result_1 = eax[7]
    int32_t edx_1 = eax[4]
    uint16_t* ebx = eax[5]
    void* esi = eax[0xb]
    int32_t edx_2 = eax[9]
    void* edi = eax[0xa]
    uint32_t edx_3 = zx.d(*(edi + 9))
    int32_t* ecx_1 = *eax
    uint32_t result = zx.d(*(eax + 0x3f))
    uint32_t edx_4 = zx.d(*(esi + 9))
    int32_t* var_14 = ecx_1
    uint32_t result_2 = result
    
    if (result != 0)
        while (true)
            uint32_t result_3 = result_1
            result = result_1 - 1
            result_1 = result
            
            if (result_3 == 0)
                break
            
            int32_t eax_4
            int32_t edx_5
            edx_5:eax_4 = sx.q(ecx + 3)
            int32_t var_34_1 = (eax_4 + (edx_5 & 3)) s>> 2
            
            switch (ecx & 3)
                case 0
                    goto label_62e174
                case 1
                    goto label_62dc7d
                case 2
                    while (true)
                        uint32_t var_1c_14
                        uint32_t var_18_4
                        uint32_t edx_159
                        
                        if (edx_3 - 1 u> 3)
                            var_1c_14 = 0
                            var_18_4 = 0
                            edx_159 = 0
                        else
                            switch (edx_3)
                                case 1
                                    uint32_t eax_355 = zx.d(*ecx_1)
                                    edx_159 = zx.d(*(((*(edi + 0xc) & eax_355) u>> *(edi + 0x20))
                                        + (&data_8bac68)[zx.d(*(edi + 0x1c))]))
                                    var_18_4 = zx.d(*(((*(edi + 0x10) & eax_355) u>> *(edi + 0x21))
                                        + (&data_8bac68)[zx.d(*(edi + 0x1d))]))
                                    var_1c_14 = zx.d(*(((*(edi + 0x14) & eax_355) u>> *(edi + 0x22))
                                        + (&data_8bac68)[zx.d(*(edi + 0x1e))]))
                                case 2
                                    uint32_t eax_363 = zx.d(*ecx_1)
                                    edx_159 = zx.d(*(((*(edi + 0xc) & eax_363) u>> *(edi + 0x20))
                                        + (&data_8bac68)[zx.d(*(edi + 0x1c))]))
                                    var_18_4 = zx.d(*(((*(edi + 0x10) & eax_363) u>> *(edi + 0x21))
                                        + (&data_8bac68)[zx.d(*(edi + 0x1d))]))
                                    var_1c_14 = zx.d(*(((*(edi + 0x14) & eax_363) u>> *(edi + 0x22))
                                        + (&data_8bac68)[zx.d(*(edi + 0x1e))]))
                                case 3
                                    var_18_4 = zx.d(*((zx.d(*(edi + 0x21)) u>> 3) + ecx_1))
                                    edx_159 = zx.d(*((zx.d(*(edi + 0x20)) u>> 3) + ecx_1))
                                    var_1c_14 = zx.d(*((zx.d(*(edi + 0x22)) u>> 3) + ecx_1))
                                case 4
                                    uint32_t eax_376 = *ecx_1
                                    edx_159 = zx.d(*(((*(edi + 0xc) & eax_376) u>> *(edi + 0x20))
                                        + (&data_8bac68)[zx.d(*(edi + 0x1c))]))
                                    var_18_4 = zx.d(*(((*(edi + 0x10) & eax_376) u>> *(edi + 0x21))
                                        + (&data_8bac68)[zx.d(*(edi + 0x1d))]))
                                    var_1c_14 = zx.d(*(((*(edi + 0x14) & eax_376) u>> *(edi + 0x22))
                                        + (&data_8bac68)[zx.d(*(edi + 0x1e))]))
                        
                        uint32_t var_10_7
                        uint32_t var_c_7
                        uint32_t var_8_7
                        
                        if (edx_4 - 1 u> 3)
                            var_c_7 = 0
                            arg1 = 0
                            var_10_7 = 0
                            var_8_7 = 0
                        else
                            switch (edx_4)
                                case 1
                                    var_8_7 = zx.d(*(((*(esi + 0xc) & zx.d(*ebx)) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                    var_10_7 = zx.d(*(((*(esi + 0x10) & zx.d(*ebx)) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    arg1 = zx.d(*(((*(esi + 0x14) & zx.d(*ebx)) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                    var_c_7 = zx.d(*(((*(esi + 0x18) & zx.d(*ebx)) u>> *(esi + 0x23))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                                case 2
                                    var_8_7 = zx.d(*(((*(esi + 0xc) & zx.d(*ebx)) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                    var_10_7 = zx.d(*(((*(esi + 0x10) & zx.d(*ebx)) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    arg1 = zx.d(*(((*(esi + 0x14) & zx.d(*ebx)) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                    var_c_7 = zx.d(*(((*(esi + 0x18) & zx.d(*ebx)) u>> *(esi + 0x23))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                                case 3
                                    var_8_7 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + ebx))
                                    var_10_7 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + ebx))
                                    arg1 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + ebx))
                                    var_c_7 = 0xff
                                case 4
                                    var_8_7 = zx.d(*(((*(esi + 0xc) & *ebx) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                    var_10_7 = zx.d(*(((*(esi + 0x10) & *ebx) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    arg1 = zx.d(*(((*(esi + 0x14) & *ebx) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                    var_c_7 = zx.d(*(((*(esi + 0x18) & *ebx) u>> *(esi + 0x23))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                        
                        uint32_t var_8_8 = var_8_7 + (edx_159 - var_8_7) * result_2 u/ 0xff
                        uint32_t ecx_441 = var_10_7 + (var_18_4 - var_10_7) * result_2 u/ 0xff
                        arg1 += (var_1c_14 - arg1) * result_2 u/ 0xff
                        uint32_t var_c_8 = var_c_7 + result_2 - var_c_7 * result_2 u/ 0xff
                        
                        if (edx_4 - 1 u> 3)
                            goto label_62f047
                        
                        switch (edx_4)
                            case 1
                                uint8_t edx_187 = (var_c_8 u>> *(esi + 0x1f)).b << *(esi + 0x23)
                                    | (arg1 u>> *(esi + 0x1e)).b << *(esi + 0x22)
                                    | (ecx_441 u>> *(esi + 0x1d)).b << *(esi + 0x21)
                                var_14 += edx_3
                                ecx_1 = var_14
                                *ebx = edx_187 | (var_8_8 u>> *(esi + 0x1c)).b << *(esi + 0x20)
                                ebx += edx_4
                            case 2
                                uint16_t eax_452 = (var_c_8 u>> *(esi + 0x1f)).w << *(esi + 0x23)
                                    | (arg1 u>> *(esi + 0x1e)).w << *(esi + 0x22)
                                    | (ecx_441 u>> *(esi + 0x1d)).w << *(esi + 0x21)
                                *ebx = eax_452 | (var_8_8 u>> *(esi + 0x1c)).w << *(esi + 0x20)
                                var_14 += edx_3
                                ebx += edx_4
                                ecx_1 = var_14
                            case 3
                                *((zx.d(*(esi + 0x20)) u>> 3) + ebx) = var_8_8.b
                                *((zx.d(*(esi + 0x21)) u>> 3) + ebx) = ecx_441.b
                                var_14 += edx_3
                                *((zx.d(*(esi + 0x22)) u>> 3) + ebx) = arg1.b
                                ebx += edx_4
                                ecx_1 = var_14
                            case 4
                                uint32_t eax_463 = var_c_8 u>> *(esi + 0x1f) << *(esi + 0x23)
                                    | arg1 u>> *(esi + 0x1e) << *(esi + 0x22)
                                    | ecx_441 u>> *(esi + 0x1d) << *(esi + 0x21)
                                *ebx = eax_463 | var_8_8 u>> *(esi + 0x1c) << *(esi + 0x20)
                            label_62f047:
                                var_14 += edx_3
                                ebx += edx_4
                                ecx_1 = var_14
                        
                    label_62dc7d:
                        uint32_t var_1c_2
                        uint32_t var_18_1
                        uint32_t edx_10
                        
                        if (edx_3 - 1 u> 3)
                            edx_10 = 0
                            var_1c_2 = 0
                            var_18_1 = 0
                        else
                            switch (edx_3)
                                case 1
                                    uint32_t eax_11 = zx.d(*ecx_1)
                                    edx_10 = zx.d(*(((*(edi + 0xc) & eax_11) u>> *(edi + 0x20))
                                        + (&data_8bac68)[zx.d(*(edi + 0x1c))]))
                                    var_18_1 = zx.d(*(((*(edi + 0x10) & eax_11) u>> *(edi + 0x21))
                                        + (&data_8bac68)[zx.d(*(edi + 0x1d))]))
                                    ecx_1 = var_14
                                    var_1c_2 = zx.d(*(((*(edi + 0x14) & eax_11) u>> *(edi + 0x22))
                                        + (&data_8bac68)[zx.d(*(edi + 0x1e))]))
                                case 2
                                    uint32_t eax_19 = zx.d(*ecx_1)
                                    edx_10 = zx.d(*(((*(edi + 0xc) & eax_19) u>> *(edi + 0x20))
                                        + (&data_8bac68)[zx.d(*(edi + 0x1c))]))
                                    var_18_1 = zx.d(*(((*(edi + 0x10) & eax_19) u>> *(edi + 0x21))
                                        + (&data_8bac68)[zx.d(*(edi + 0x1d))]))
                                    ecx_1 = var_14
                                    var_1c_2 = zx.d(*(((*(edi + 0x14) & eax_19) u>> *(edi + 0x22))
                                        + (&data_8bac68)[zx.d(*(edi + 0x1e))]))
                                case 3
                                    var_18_1 = zx.d(*((zx.d(*(edi + 0x21)) u>> 3) + ecx_1))
                                    edx_10 = zx.d(*((zx.d(*(edi + 0x20)) u>> 3) + ecx_1))
                                    var_1c_2 = zx.d(*((zx.d(*(edi + 0x22)) u>> 3) + ecx_1))
                                case 4
                                    uint32_t eax_33 = *ecx_1
                                    edx_10 = zx.d(*(((*(edi + 0xc) & eax_33) u>> *(edi + 0x20))
                                        + (&data_8bac68)[zx.d(*(edi + 0x1c))]))
                                    var_18_1 = zx.d(*(((*(edi + 0x10) & eax_33) u>> *(edi + 0x21))
                                        + (&data_8bac68)[zx.d(*(edi + 0x1d))]))
                                    ecx_1 = var_14
                                    var_1c_2 = zx.d(*(((*(edi + 0x14) & eax_33) u>> *(edi + 0x22))
                                        + (&data_8bac68)[zx.d(*(edi + 0x1e))]))
                        
                        uint32_t var_10_1
                        uint32_t var_c_1
                        uint32_t var_8_1
                        
                        if (edx_4 - 1 u> 3)
                            arg1 = 0
                            var_10_1 = 0
                            var_8_1 = 0
                            var_c_1 = 0
                        else
                            switch (edx_4)
                                case 1
                                    var_8_1 = zx.d(*(((*(esi + 0xc) & zx.d(*ebx)) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                    var_10_1 = zx.d(*(((*(esi + 0x10) & zx.d(*ebx)) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    arg1 = zx.d(*(((*(esi + 0x14) & zx.d(*ebx)) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                    ecx_1 = var_14
                                    var_c_1 = zx.d(*(((*(esi + 0x18) & zx.d(*ebx)) u>> *(esi + 0x23))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                                case 2
                                    var_8_1 = zx.d(*(((*(esi + 0xc) & zx.d(*ebx)) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                    var_10_1 = zx.d(*(((*(esi + 0x10) & zx.d(*ebx)) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    arg1 = zx.d(*(((*(esi + 0x14) & zx.d(*ebx)) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                    ecx_1 = var_14
                                    var_c_1 = zx.d(*(((*(esi + 0x18) & zx.d(*ebx)) u>> *(esi + 0x23))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                                case 3
                                    var_8_1 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + ebx))
                                    var_10_1 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + ebx))
                                    arg1 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + ebx))
                                    var_c_1 = 0xff
                                case 4
                                    var_8_1 = zx.d(*(((*(esi + 0xc) & *ebx) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                    var_10_1 = zx.d(*(((*(esi + 0x10) & *ebx) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    arg1 = zx.d(*(((*(esi + 0x14) & *ebx) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                    ecx_1 = var_14
                                    var_c_1 = zx.d(*(((*(esi + 0x18) & *ebx) u>> *(esi + 0x23))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                        
                        uint32_t var_8_2 = var_8_1 + (edx_10 - var_8_1) * result_2 u/ 0xff
                        uint32_t var_10_2 = var_10_1 + (var_18_1 - var_10_1) * result_2 u/ 0xff
                        arg1 += (var_1c_2 - arg1) * result_2 u/ 0xff
                        uint32_t var_c_2 = var_c_1 + result_2 - var_c_1 * result_2 u/ 0xff
                        
                        if (edx_4 - 1 u<= 3)
                            switch (edx_4)
                                case 1
                                    uint8_t edx_38 = (var_c_2 u>> *(esi + 0x1f)).b << *(esi + 0x23)
                                        | (arg1 u>> *(esi + 0x1e)).b << *(esi + 0x22)
                                        | (var_10_2 u>> *(esi + 0x1d)).b << *(esi + 0x21)
                                    *ebx = edx_38 | (var_8_2 u>> *(esi + 0x1c)).b << *(esi + 0x20)
                                    ecx_1 = var_14
                                case 2
                                    uint16_t eax_112 = (var_c_2 u>> *(esi + 0x1f)).w << *(esi + 0x23)
                                        | (arg1 u>> *(esi + 0x1e)).w << *(esi + 0x22)
                                        | (var_10_2 u>> *(esi + 0x1d)).w << *(esi + 0x21)
                                    *ebx = eax_112 | (var_8_2 u>> *(esi + 0x1c)).w << *(esi + 0x20)
                                    ecx_1 = var_14
                                case 3
                                    *((zx.d(*(esi + 0x20)) u>> 3) + ebx) = var_8_2.b
                                    *((zx.d(*(esi + 0x21)) u>> 3) + ebx) = var_10_2.b
                                    *((zx.d(*(esi + 0x22)) u>> 3) + ebx) = arg1.b
                                case 4
                                    uint32_t eax_123 = var_c_2 u>> *(esi + 0x1f) << *(esi + 0x23)
                                        | arg1 u>> *(esi + 0x1e) << *(esi + 0x22)
                                        | var_10_2 u>> *(esi + 0x1d) << *(esi + 0x21)
                                    *ebx = eax_123 | var_8_2 u>> *(esi + 0x1c) << *(esi + 0x20)
                                    ecx_1 = var_14
                        
                        ecx_1 += edx_3
                        ebx += edx_4
                        int32_t eax_126 = var_34_1 - 1
                        var_14 = ecx_1
                        var_34_1 = eax_126
                        
                        if (eax_126 s<= 0)
                            break
                        
                    label_62e174:
                        uint32_t var_1c_6
                        uint32_t var_18_2
                        uint32_t edx_60
                        
                        if (edx_3 - 1 u> 3)
                            edx_60 = 0
                            var_1c_6 = 0
                            var_18_2 = 0
                        else
                            switch (edx_3)
                                case 1
                                    uint32_t eax_129 = zx.d(*ecx_1)
                                    edx_60 = zx.d(*(((*(edi + 0xc) & eax_129) u>> *(edi + 0x20))
                                        + (&data_8bac68)[zx.d(*(edi + 0x1c))]))
                                    var_18_2 = zx.d(*(((*(edi + 0x10) & eax_129) u>> *(edi + 0x21))
                                        + (&data_8bac68)[zx.d(*(edi + 0x1d))]))
                                    ecx_1 = var_14
                                    var_1c_6 = zx.d(*(((*(edi + 0x14) & eax_129) u>> *(edi + 0x22))
                                        + (&data_8bac68)[zx.d(*(edi + 0x1e))]))
                                case 2
                                    uint32_t eax_137 = zx.d(*ecx_1)
                                    edx_60 = zx.d(*(((*(edi + 0xc) & eax_137) u>> *(edi + 0x20))
                                        + (&data_8bac68)[zx.d(*(edi + 0x1c))]))
                                    var_18_2 = zx.d(*(((*(edi + 0x10) & eax_137) u>> *(edi + 0x21))
                                        + (&data_8bac68)[zx.d(*(edi + 0x1d))]))
                                    ecx_1 = var_14
                                    var_1c_6 = zx.d(*(((*(edi + 0x14) & eax_137) u>> *(edi + 0x22))
                                        + (&data_8bac68)[zx.d(*(edi + 0x1e))]))
                                case 3
                                    var_18_2 = zx.d(*((zx.d(*(edi + 0x21)) u>> 3) + ecx_1))
                                    edx_60 = zx.d(*((zx.d(*(edi + 0x20)) u>> 3) + ecx_1))
                                    var_1c_6 = zx.d(*((zx.d(*(edi + 0x22)) u>> 3) + ecx_1))
                                case 4
                                    uint32_t eax_151 = *ecx_1
                                    edx_60 = zx.d(*(((*(edi + 0xc) & eax_151) u>> *(edi + 0x20))
                                        + (&data_8bac68)[zx.d(*(edi + 0x1c))]))
                                    var_18_2 = zx.d(*(((*(edi + 0x10) & eax_151) u>> *(edi + 0x21))
                                        + (&data_8bac68)[zx.d(*(edi + 0x1d))]))
                                    ecx_1 = var_14
                                    var_1c_6 = zx.d(*(((*(edi + 0x14) & eax_151) u>> *(edi + 0x22))
                                        + (&data_8bac68)[zx.d(*(edi + 0x1e))]))
                        
                        uint32_t var_10_3
                        uint32_t var_c_3
                        uint32_t var_8_3
                        
                        if (edx_4 - 1 u> 3)
                            arg1 = 0
                            var_10_3 = 0
                            var_8_3 = 0
                            var_c_3 = 0
                        else
                            switch (edx_4)
                                case 1
                                    var_8_3 = zx.d(*(((*(esi + 0xc) & zx.d(*ebx)) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                    var_10_3 = zx.d(*(((*(esi + 0x10) & zx.d(*ebx)) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    arg1 = zx.d(*(((*(esi + 0x14) & zx.d(*ebx)) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                    ecx_1 = var_14
                                    var_c_3 = zx.d(*(((*(esi + 0x18) & zx.d(*ebx)) u>> *(esi + 0x23))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                                case 2
                                    var_8_3 = zx.d(*(((*(esi + 0xc) & zx.d(*ebx)) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                    var_10_3 = zx.d(*(((*(esi + 0x10) & zx.d(*ebx)) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    arg1 = zx.d(*(((*(esi + 0x14) & zx.d(*ebx)) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                    ecx_1 = var_14
                                    var_c_3 = zx.d(*(((*(esi + 0x18) & zx.d(*ebx)) u>> *(esi + 0x23))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                                case 3
                                    var_8_3 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + ebx))
                                    var_10_3 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + ebx))
                                    arg1 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + ebx))
                                    var_c_3 = 0xff
                                case 4
                                    var_8_3 = zx.d(*(((*(esi + 0xc) & *ebx) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                    var_10_3 = zx.d(*(((*(esi + 0x10) & *ebx) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    arg1 = zx.d(*(((*(esi + 0x14) & *ebx) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                    ecx_1 = var_14
                                    var_c_3 = zx.d(*(((*(esi + 0x18) & *ebx) u>> *(esi + 0x23))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                        
                        uint32_t var_8_4 = var_8_3 + (edx_60 - var_8_3) * result_2 u/ 0xff
                        uint32_t var_10_4 = var_10_3 + (var_18_2 - var_10_3) * result_2 u/ 0xff
                        arg1 += (var_1c_6 - arg1) * result_2 u/ 0xff
                        uint32_t var_c_4 = var_c_3 + result_2 - var_c_3 * result_2 u/ 0xff
                        
                        if (edx_4 - 1 u<= 3)
                            switch (edx_4)
                                case 1
                                    uint8_t edx_88 = (var_c_4 u>> *(esi + 0x1f)).b << *(esi + 0x23)
                                        | (arg1 u>> *(esi + 0x1e)).b << *(esi + 0x22)
                                        | (var_10_4 u>> *(esi + 0x1d)).b << *(esi + 0x21)
                                    *ebx = edx_88 | (var_8_4 u>> *(esi + 0x1c)).b << *(esi + 0x20)
                                    ecx_1 = var_14
                                case 2
                                    uint16_t eax_230 = (var_c_4 u>> *(esi + 0x1f)).w << *(esi + 0x23)
                                        | (arg1 u>> *(esi + 0x1e)).w << *(esi + 0x22)
                                        | (var_10_4 u>> *(esi + 0x1d)).w << *(esi + 0x21)
                                    *ebx = eax_230 | (var_8_4 u>> *(esi + 0x1c)).w << *(esi + 0x20)
                                    ecx_1 = var_14
                                case 3
                                    *((zx.d(*(esi + 0x20)) u>> 3) + ebx) = var_8_4.b
                                    *((zx.d(*(esi + 0x21)) u>> 3) + ebx) = var_10_4.b
                                    *((zx.d(*(esi + 0x22)) u>> 3) + ebx) = arg1.b
                                case 4
                                    uint32_t eax_241 = var_c_4 u>> *(esi + 0x1f) << *(esi + 0x23)
                                        | arg1 u>> *(esi + 0x1e) << *(esi + 0x22)
                                        | var_10_4 u>> *(esi + 0x1d) << *(esi + 0x21)
                                    *ebx = eax_241 | var_8_4 u>> *(esi + 0x1c) << *(esi + 0x20)
                                    ecx_1 = var_14
                        
                        ecx_1 += edx_3
                        ebx += edx_4
                        var_14 = ecx_1
                    label_62e65c:
                        uint32_t var_1c_10
                        uint32_t var_18_3
                        uint32_t edx_110
                        
                        if (edx_3 - 1 u> 3)
                            var_1c_10 = 0
                            var_18_3 = 0
                            edx_110 = 0
                        else
                            switch (edx_3)
                                case 1
                                    uint32_t eax_245 = zx.d(*ecx_1)
                                    edx_110 = zx.d(*(((*(edi + 0xc) & eax_245) u>> *(edi + 0x20))
                                        + (&data_8bac68)[zx.d(*(edi + 0x1c))]))
                                    var_18_3 = zx.d(*(((*(edi + 0x10) & eax_245) u>> *(edi + 0x21))
                                        + (&data_8bac68)[zx.d(*(edi + 0x1d))]))
                                    var_1c_10 = zx.d(*(((*(edi + 0x14) & eax_245) u>> *(edi + 0x22))
                                        + (&data_8bac68)[zx.d(*(edi + 0x1e))]))
                                case 2
                                    uint32_t eax_253 = zx.d(*ecx_1)
                                    edx_110 = zx.d(*(((*(edi + 0xc) & eax_253) u>> *(edi + 0x20))
                                        + (&data_8bac68)[zx.d(*(edi + 0x1c))]))
                                    var_18_3 = zx.d(*(((*(edi + 0x10) & eax_253) u>> *(edi + 0x21))
                                        + (&data_8bac68)[zx.d(*(edi + 0x1d))]))
                                    var_1c_10 = zx.d(*(((*(edi + 0x14) & eax_253) u>> *(edi + 0x22))
                                        + (&data_8bac68)[zx.d(*(edi + 0x1e))]))
                                case 3
                                    var_18_3 = zx.d(*((zx.d(*(edi + 0x21)) u>> 3) + ecx_1))
                                    edx_110 = zx.d(*((zx.d(*(edi + 0x20)) u>> 3) + ecx_1))
                                    var_1c_10 = zx.d(*((zx.d(*(edi + 0x22)) u>> 3) + ecx_1))
                                case 4
                                    uint32_t eax_266 = *ecx_1
                                    edx_110 = zx.d(*(((*(edi + 0xc) & eax_266) u>> *(edi + 0x20))
                                        + (&data_8bac68)[zx.d(*(edi + 0x1c))]))
                                    var_18_3 = zx.d(*(((*(edi + 0x10) & eax_266) u>> *(edi + 0x21))
                                        + (&data_8bac68)[zx.d(*(edi + 0x1d))]))
                                    var_1c_10 = zx.d(*(((*(edi + 0x14) & eax_266) u>> *(edi + 0x22))
                                        + (&data_8bac68)[zx.d(*(edi + 0x1e))]))
                        
                        uint32_t var_10_5
                        uint32_t var_c_5
                        uint32_t var_8_5
                        
                        if (edx_4 - 1 u> 3)
                            var_c_5 = 0
                            arg1 = 0
                            var_10_5 = 0
                            var_8_5 = 0
                        else
                            switch (edx_4)
                                case 1
                                    var_8_5 = zx.d(*(((*(esi + 0xc) & zx.d(*ebx)) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                    var_10_5 = zx.d(*(((*(esi + 0x10) & zx.d(*ebx)) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    arg1 = zx.d(*(((*(esi + 0x14) & zx.d(*ebx)) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                    var_c_5 = zx.d(*(((*(esi + 0x18) & zx.d(*ebx)) u>> *(esi + 0x23))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                                case 2
                                    var_8_5 = zx.d(*(((*(esi + 0xc) & zx.d(*ebx)) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                    var_10_5 = zx.d(*(((*(esi + 0x10) & zx.d(*ebx)) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    arg1 = zx.d(*(((*(esi + 0x14) & zx.d(*ebx)) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                    var_c_5 = zx.d(*(((*(esi + 0x18) & zx.d(*ebx)) u>> *(esi + 0x23))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                                case 3
                                    var_8_5 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + ebx))
                                    var_10_5 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + ebx))
                                    arg1 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + ebx))
                                    var_c_5 = 0xff
                                case 4
                                    var_8_5 = zx.d(*(((*(esi + 0xc) & *ebx) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                    var_10_5 = zx.d(*(((*(esi + 0x10) & *ebx) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    arg1 = zx.d(*(((*(esi + 0x14) & *ebx) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                    var_c_5 = zx.d(*(((*(esi + 0x18) & *ebx) u>> *(esi + 0x23))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                        
                        uint32_t var_8_6 = var_8_5 + (edx_110 - var_8_5) * result_2 u/ 0xff
                        uint32_t ecx_319 = var_10_5 + (var_18_3 - var_10_5) * result_2 u/ 0xff
                        arg1 += (var_1c_10 - arg1) * result_2 u/ 0xff
                        uint32_t var_c_6 = var_c_5 + result_2 - var_c_5 * result_2 u/ 0xff
                        
                        if (edx_4 - 1 u<= 3)
                            switch (edx_4)
                                case 1
                                    uint8_t edx_138 = (var_c_6 u>> *(esi + 0x1f)).b << *(esi + 0x23)
                                        | (arg1 u>> *(esi + 0x1e)).b << *(esi + 0x22)
                                        | (ecx_319 u>> *(esi + 0x1d)).b << *(esi + 0x21)
                                    *ebx = edx_138 | (var_8_6 u>> *(esi + 0x1c)).b << *(esi + 0x20)
                                case 2
                                    uint16_t eax_341 = (var_c_6 u>> *(esi + 0x1f)).w << *(esi + 0x23)
                                        | (arg1 u>> *(esi + 0x1e)).w << *(esi + 0x22)
                                        | (ecx_319 u>> *(esi + 0x1d)).w << *(esi + 0x21)
                                    *ebx = eax_341 | (var_8_6 u>> *(esi + 0x1c)).w << *(esi + 0x20)
                                case 3
                                    *((zx.d(*(esi + 0x20)) u>> 3) + ebx) = var_8_6.b
                                    *((zx.d(*(esi + 0x21)) u>> 3) + ebx) = ecx_319.b
                                    *((zx.d(*(esi + 0x22)) u>> 3) + ebx) = arg1.b
                                case 4
                                    uint32_t eax_350 = var_c_6 u>> *(esi + 0x1f) << *(esi + 0x23)
                                        | arg1 u>> *(esi + 0x1e) << *(esi + 0x22)
                                        | ecx_319 u>> *(esi + 0x1d) << *(esi + 0x21)
                                    *ebx = eax_350 | var_8_6 u>> *(esi + 0x1c) << *(esi + 0x20)
                        
                        var_14 += edx_3
                        ebx += edx_4
                        ecx_1 = var_14
                case 3
                    goto label_62e65c
            
            ecx_1 += edx_1
            ebx += edx_2
            var_14 = ecx_1
    
    return result
}
