// 函数名称: sub_682cf0
// 虚拟地址: 0x682cf0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_682cf0(void* arg1, int32_t arg2, int32_t* arg3, char* arg4)
{
    // 第一条实际指令: int32_t i_2 = *(arg1 + 0x70)
    int32_t i_2 = *(arg1 + 0x70)
    void* esi = *(arg1 + 0x1cc)
    int32_t ecx = *(esi + 0x18)
    int32_t ecx_1 = *(arg1 + 0x144)
    int32_t* eax_1 = *(arg1 + 0x88)
    int32_t edi = *eax_1
    int32_t edi_1 = eax_1[1]
    void* result = eax_1[2]
    int32_t ecx_2 = *(esi + 0x28)
    uint32_t ebx = 0
    void* var_48 = esi
    int32_t i_3 = i_2
    int32_t var_44 = ecx_2
    void* result_1 = result
    
    if (arg4 s> 0)
        int32_t* edi_3 = arg2 - arg3
        int32_t* var_28_1 = arg3
        int32_t* var_50_1 = edi_3
        char* var_4c_1 = arg4
        
        while (true)
            char* edi_4 = *(edi_3 + var_28_1)
            char* eax_5 = *var_28_1
            arg4 = edi_4
            char* var_14_1 = eax_5
            int32_t var_38_1
            int32_t var_10_1
            void* result_2
            
            if (*(esi + 0x24) == 0)
                void* result_3 = *(esi + 0x20)
                var_38_1 = 1
                *(esi + 0x24) = 1
                var_10_1 = 3
                result_2 = result_3
                result = result_3
            else
                var_14_1 = &eax_5[i_2 - 1]
                result = *(esi + 0x20) + ((i_2 * 3 + 3) << 1)
                arg4 = &edi_4[i_2 * 3 - 3]
                var_38_1 = 0xffffffff
                var_10_1 = 0xfffffffd
                result_2 = result
                *(esi + 0x24) = 0
            
            i_2 = i_3
            uint32_t esi_1 = 0
            uint32_t edi_7 = 0
            int16_t var_34_1 = 0
            int16_t var_30_1 = 0
            int16_t var_2c_1 = 0
            int16_t var_24_1 = 0
            int16_t var_20_1 = 0
            int16_t var_1c_1 = 0
            int32_t i_1 = i_2
            
            if (i_2 != 0)
                int32_t i
                
                do
                    uint32_t esi_5 = zx.d(*(
                        *(ecx_2 + ((sx.d(*(result + (var_10_1 << 1))) + esi_1 + 8) s>> 4 << 2))
                        + zx.d(*arg4) + ecx_1))
                    uint32_t edi_11 = zx.d(*(
                        *(ecx_2 + ((sx.d(*(result + (var_10_1 << 1) + 2)) + edi_7 + 8) s>> 4 << 2))
                        + zx.d(arg4[1]) + ecx_1))
                    uint32_t ebx_1 = zx.d(*(
                        *(ecx_2 + ((sx.d(*(result + (var_10_1 << 1) + 4)) + ebx + 8) s>> 4 << 2))
                        + zx.d(arg4[2]) + ecx_1))
                    int32_t eax_12 = edi_11 s>> 2
                    int32_t ecx_6 = ebx_1 s>> 3
                    int32_t eax_14 = (eax_12 << 5) + ecx_6
                    int32_t edx_18 = esi_5 s>> 3
                    int32_t ecx_8 = *(ecx + (edx_18 << 2))
                    
                    if (*(ecx_8 + (eax_14 << 1)) == 0)
                        sub_682820(ecx_6, edx_18, arg1, eax_12, ecx_6)
                    
                    void* eax_18 = zx.d(*(ecx_8 + (eax_14 << 1))) - 1
                    *var_14_1 = eax_18.b
                    uint32_t esi_6 = esi_5 - zx.d(*(eax_18 + edi))
                    uint32_t edi_12 = edi_11 - zx.d(*(eax_18 + edi_1))
                    uint32_t ebx_2 = ebx_1 - zx.d(*(eax_18 + result_1))
                    uint32_t esi_7 = esi_6 * 3
                    int16_t* result_4 = result_2
                    *result_4 = esi_7.w + var_1c_1
                    uint32_t eax_19 = esi_7 * 2
                    uint32_t esi_8 = esi_7 + eax_19
                    var_1c_1 = var_2c_1 + esi_8.w
                    var_2c_1 = esi_6.w
                    uint32_t edi_13 = edi_12 * 3
                    result_4[1] = var_20_1 + edi_13.w
                    esi_1 = esi_8 + eax_19
                    uint32_t eax_20 = edi_13 * 2
                    uint32_t edi_14 = edi_13 + eax_20
                    var_20_1 = var_30_1 + edi_14.w
                    var_30_1 = edi_12.w
                    uint32_t ebx_3 = ebx_2 * 3
                    edi_7 = edi_14 + eax_20
                    result_4[2] = var_24_1 + ebx_3.w
                    uint32_t eax_21 = ebx_3 * 2
                    uint32_t ebx_4 = ebx_3 + eax_21
                    var_24_1 = var_34_1 + ebx_4.w
                    ebx = ebx_4 + eax_21
                    arg4 = &arg4[var_10_1]
                    var_34_1 = ebx_2.w
                    var_14_1 = &var_14_1[var_38_1]
                    i = i_1
                    i_1 -= 1
                    result = &result_4[var_10_1]
                    ecx_2 = var_44
                    result_2 = result
                while (i != 1)
                i_2 = i_3
            
            var_28_1 = &var_28_1[1]
            esi = var_48
            *result = var_1c_1
            *(result + 2) = var_20_1
            ebx = 0
            char* temp0_1 = var_4c_1
            var_4c_1 -= 1
            *(result + 4) = var_24_1
            
            if (temp0_1 == 1)
                break
            
            edi_3 = var_50_1
    
    return result
}
