// 函数名称: sub_5b50b6
// 虚拟地址: 0x5b50b6
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5b50b6(double* arg1, double* arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_c = 0
    int32_t var_c = 0
    int32_t var_8 = 0
    void* result
    
    if (data_bed210 == 0)
        result = sub_5b9ed4
    else
        result = DecodePointer(data_3166ed4)
    
    int32_t var_2c
    double var_14_1
    double* esi_1
    
    if (arg4 s> 0xa6)
        if (arg4 - 0x3e8 u<= 0xc)
            double* ecx_14
            long double x87_r7_9
            
            switch (arg4)
                case 0x3e8
                    void* const var_28_14 = &data_8476f0
                label_5b524e:
                    ecx_14 = arg1
                    esi_1 = arg3
                    *esi_1 = fconvert.d(fconvert.t(*ecx_14))
                    goto label_5b51d7
                case 0x3e9
                    char const* const var_28_15 = "log10"
                    goto label_5b524e
                case 0x3ea
                    void* const var_28_16 = &data_6b1f48
                    goto label_5b524e
                case 0x3eb
                    char const* const var_28_17 = "atan"
                    goto label_5b524e
                case 0x3ec
                    char const* const var_28_18 = "ceil"
                    goto label_5b524e
                case 0x3ed
                    char const* const var_28_19 = "floor"
                    goto label_5b524e
                case 0x3ee
                label_5b525d:
                    void* const var_28_12 = &data_6b1f44
                    goto label_5b51cc
                case 0x3ef
                    char const* const var_28_20 = "modf"
                    goto label_5b524e
                case 0x3f0
                label_5b523e:
                    char const* const var_28_10 = "acos"
                    goto label_5b51cc
                case 0x3f1
                label_5b5235:
                    char const* const var_28_9 = "asin"
                label_5b51cc:
                    ecx_14 = arg1
                    esi_1 = arg3
                label_5b51d7:
                    double var_24_3 = fconvert.d(fconvert.t(*ecx_14))
                    double var_1c_3 = fconvert.d(fconvert.t(*arg2))
                    x87_r7_9 = fconvert.t(*esi_1)
                case 0x3f2
                    void* const var_28_21 = &data_6b1ef8
                label_5b5310:
                    esi_1 = arg3
                    x87_r7_9 = fconvert.t(*arg1) * fconvert.t(var_c.q)
                    *esi_1 = fconvert.d(x87_r7_9)
                    double var_24_4 = fconvert.d(fconvert.t(*arg1))
                    double var_1c_4 = fconvert.d(fconvert.t(*arg2))
                case 0x3f3
                    void* const var_28_22 = &data_6b1ef4
                    goto label_5b5310
                case 0x3f4
                    void* const var_28_23 = &data_6b1ef0
                    goto label_5b5310
            
            var_14_1 = fconvert.d(x87_r7_9)
            var_2c = 1
            result = result(&var_2c)
            
            if (result == 0)
                result = __errno()
                *result = 0x21
            
            *esi_1 = fconvert.d(fconvert.t(var_14_1))
    else if (arg4 == 0xa6)
        var_2c = 3
        char const* const var_28_13 = "exp10"
    label_5b5154:
        esi_1 = arg3
        double var_24_1 = fconvert.d(fconvert.t(*arg1))
        double var_1c_1 = fconvert.d(fconvert.t(*arg2))
        var_14_1 = fconvert.d(fconvert.t(*esi_1))
        result = result(&var_2c)
        
        if (result == 0)
            result = __errno()
            *result = 0x22
        
        *esi_1 = fconvert.d(fconvert.t(var_14_1))
    else if (arg4 s> 0x19)
        if (arg4 == 0x1a)
            result = arg3
            *result = fconvert.d(float.t(1))
        else
            if (arg4 == 0x1b)
                var_2c = 2
            label_5b5145:
                void* const var_28_1 = &data_6b1f44
                goto label_5b5154
            
            if (arg4 == 0x1c)
                goto label_5b525d
            
            if (arg4 == 0x1d)
                void* const var_28_11 = &data_6b1f44
                goto label_5b524e
            
            if (arg4 == 0x3a)
                goto label_5b523e
            
            if (arg4 == 0x3d)
                goto label_5b5235
    else if (arg4 == 0x19)
        void* const var_28_8 = &data_6b1f44
    label_5b5192:
        esi_1 = arg3
        double var_24_2 = fconvert.d(fconvert.t(*arg1))
        double var_1c_2 = fconvert.d(fconvert.t(*arg2))
        long double x87_r7_6 = fconvert.t(*esi_1)
        var_2c = 4
        var_14_1 = fconvert.d(x87_r7_6)
        result = result(&var_2c)
        *esi_1 = fconvert.d(fconvert.t(var_14_1))
    else
        switch (arg4)
            case 2
                var_2c = 2
                void* const var_28_7 = &data_8476f0
                goto label_5b5154
            case 3
                void* const var_28_6 = &data_8476f0
                goto label_5b51cc
            case 8
                var_2c = 2
                char const* const var_28_5 = "log10"
                goto label_5b5154
            case 9
                char const* const var_28_4 = "log10"
                goto label_5b51cc
            case 0xe
                var_2c = 3
                void* const var_28_3 = &data_6b1f48
                goto label_5b5154
            case 0xf
                void* const var_28_2 = &data_6b1f48
                goto label_5b5192
            case 0x18
                var_2c = 3
                goto label_5b5145
    return result
}
