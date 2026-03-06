// 函数名称: sub_644e50
// 虚拟地址: 0x644e50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_644e50(char* arg1, int32_t arg2, void* arg3, int32_t arg4, uint32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, double arg9, double arg10)
{
    // 第一条实际指令: char* esi = arg1
    char* esi = arg1
    int32_t edi = 0
    void* var_c = nullptr
    int32_t var_8 = 0
    
    if (esi == 0)
        return 0
    
    int32_t var_18
    int32_t var_14
    int32_t var_10
    
    if ((*esi & 1) != 0)
        void* eax_2 = sub_644220(esi)
        var_c = eax_2
        sub_5d7eb0(eax_2, *(esi + 4), &var_18, &var_14, &var_10)
        var_8 = 1
        edi = 1
    
    void* eax_3
    eax_3.b = *(*(esi + 4) + 8)
    char* ecx_2
    ecx_2.b = eax_3.b == 0x20
    arg1 = ecx_2
    int32_t var_c_1
    char* ebx
    
    if (ecx_2 != 0 || eax_3.b == 8)
        ebx = esi
        var_c_1 = 0
    else
        int32_t var_38_2 = 0xff000000
        ebx = sub_5d6670(0, *(esi + 8), *(esi + 0xc), 0x20, 0xff, 0xff00, 0xff0000)
        
        if (edi != 0)
            sub_5d5cf0(esi, 0, 0)
        
        sub_5d6060(esi, nullptr, ebx, nullptr)
        
        if (edi != 0)
            sub_5d5cf0(esi, 1, var_c)
        
        var_c_1 = 1
        arg1 = 1
        ecx_2 = 1
    
    long double x87_r6 = fconvert.t(65536.0)
    double var_28 = fconvert.d(fconvert.t(arg10) * x87_r6)
    double var_20 = fconvert.d(x87_r6 * fconvert.t(arg9))
    int32_t var_50_2
    int32_t var_4c_2
    int32_t var_48
    int32_t var_44_3
    int32_t var_40_4
    int32_t var_3c_3
    
    if (ecx_2 == 0)
        int32_t var_38_5 = 0
        var_3c_3 = 0
        var_40_4 = 0
        var_44_3 = 0
        var_48 = 8
        var_4c_2 = arg8 + 2
        var_50_2 = arg7
    else
        void* eax_6 = *(ebx + 4)
        int32_t var_38_4 = *(eax_6 + 0x18)
        var_3c_3 = *(eax_6 + 0x14)
        var_40_4 = *(eax_6 + 0x10)
        var_44_3 = *(eax_6 + 0xc)
        var_48 = 0x20
        var_4c_2 = arg8 + 2
        var_50_2 = arg7
    
    char* result = sub_5d6670(0, var_50_2, var_4c_2, var_48, var_44_3, var_40_4, var_3c_3)
    
    if (result == 0)
        return result
    
    *(result + 0xc) = arg8
    
    if (var_8 == 1)
        sub_611e60(result, nullptr, sub_5d7dc0(*(result + 4), var_18.b, var_14.b, var_10.b))
    
    if ((*ebx & 2) != 0)
        sub_5d6350(ebx)
    
    if (arg1 == 0)
        int32_t* ecx_13 = *(*(ebx + 4) + 4)
        int32_t i = 0
        
        if (*ecx_13 s> 0)
            do
                *(*(*(*(result + 4) + 4) + 4) + (i << 2)) = *(ecx_13[1] + (i << 2))
                ecx_13 = *(*(ebx + 4) + 4)
                i += 1
            while (i s< *ecx_13)
        
        **(*(result + 4) + 4) = **(*(ebx + 4) + 4)
        int32_t var_38_9 = arg6
        uint32_t var_3c_6 = arg5
        int32_t eax_18 = sub_685f40(fconvert.t(var_20))
        int32_t eax_19
        int32_t ecx_20
        void* edx_14
        eax_19, ecx_20, edx_14 = sub_685f40(fconvert.t(var_28))
        sub_644d00(arg2, result, edx_14, ecx_20, ebx, arg3, eax_19, eax_18)
        sub_5d5cf0(result, 3, sub_644220(ebx))
    else
        int32_t var_38_8 = arg4
        int32_t var_3c_5 = arg6
        int32_t eax_12 = sub_685f40(fconvert.t(var_20))
        int32_t eax_13
        void* ecx_10
        eax_13, ecx_10 = sub_685f40(fconvert.t(var_28))
        sub_644910(arg2, arg3, ecx_10, ebx, result, arg3, eax_13, eax_12, arg5)
        sub_5d5cf0(result, 3, sub_644220(ebx))
    
    if ((*ebx & 2) != 0)
        sub_5d6380(ebx)
    
    if (var_c_1 != 0)
        sub_5d65d0(ebx)
    
    return result
}
