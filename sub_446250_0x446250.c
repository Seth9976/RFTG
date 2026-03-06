// 函数名称: sub_446250
// 虚拟地址: 0x446250
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_446250(int32_t* arg1, int32_t* arg2 @ esi)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    int32_t result
    
    if (sub_419400(&var_8).b != 0)
        int32_t* edi_1 = var_8
        result = *edi_1
        
        if (result != 0x47 && result != 0x1f)
            if (result == 0x20)
                return sub_445db0(arg2, 0x19) != 0
            
            if (result == 0x21)
                return sub_445db0(arg2, 0x4c) != 0
            
            if (result != 0x40)
            label_4462cf:
                
                if (*edi_1 == 0x3f)
                    result = sub_445db0(arg2, 0xa)
                
                if (*edi_1 != 0x3f || result.b == 0)
                    if (*edi_1 == 0x22)
                        result = sub_445db0(arg2, 0x11)
                    
                    if (*edi_1 != 0x22 || result.b == 0)
                        if (*edi_1 == 0x24)
                            result = sub_445db0(arg2, 0x4b)
                        
                        if (*edi_1 != 0x24 || result.b == 0)
                            if (*edi_1 == 0x23)
                                result = sub_445db0(arg2, 0x1d)
                            
                            if (*edi_1 != 0x23 || result.b == 0)
                                if (*edi_1 == 0x25)
                                    result = sub_445db0(arg2, 0x13)
                                
                                if (*edi_1 != 0x25 || result.b == 0)
                                    if (*edi_1 == 0x32)
                                        result = sub_445db0(arg2, 0x1b)
                                    
                                    if (*edi_1 != 0x32 || result.b == 0)
                                        if (*edi_1 == 0x38)
                                            result = sub_445db0(arg2, 0xb)
                                        
                                        if (*edi_1 != 0x38 || result.b == 0)
                                            if (*edi_1 == 0x35)
                                                result = sub_445db0(arg2, 0x34)
                                            
                                            if (*edi_1 != 0x35 || result.b == 0)
                                                if (*edi_1 == 0x36)
                                                    result = sub_445db0(arg2, 0xa)
                                                
                                                if (*edi_1 != 0x36 || result.b == 0)
                                                    if (*edi_1 != 0x37)
                                                    label_4463e5:
                                                        
                                                        if (*edi_1 == 0x3a)
                                                            result = sub_445db0(arg2, 0x17)
                                                        
                                                        if (*edi_1 != 0x3a || result.b == 0)
                                                            if (*edi_1 == 0x39)
                                                                result = sub_445db0(arg2, 0x18)
                                                            
                                                            if (*edi_1 != 0x39 || result.b == 0)
                                                                if (*edi_1 == 0x3b)
                                                                    result = sub_445db0(arg2, 0x55)
                                                                
                                                                if (*edi_1 != 0x3b || result.b == 0)
                                                                    if (*edi_1 == 0x3c)
                                                                        result = sub_445db0(arg2, 0x19)
                                                                    
                                                                    if (*edi_1 != 0x3c || result.b == 0)
                                                                        result = *edi_1
                                                                        
                                                                        if (result == 0x3e || result == 0x3d)
                                                                            if (sub_445db0(arg2, 0x18).b == 0
                                                                                    && sub_445db0(arg2, 0x10).b == 0)
                                                                                goto label_44646c
                                                                        else
                                                                        label_44646c:
                                                                            
                                                                            if (*edi_1 != 0x33)
                                                                            label_44648f:
                                                                                
                                                                                if (*edi_1 != 0x34)
                                                                                label_4464b2:
                                                                                    int32_t edi_2 = *edi_1
                                                                                    
                                                                                    if ((edi_2 != 0x41 || *arg2 != 1) && (
                                                                                            edi_2 != 0x42 || *arg2 != 1
                                                                                            || arg2[0x20] != 4))
                                                                                        result.b = 1
                                                                                        return result
                                                                                else if (sub_445db0(arg2, 0x17).b == 0
                                                                                        && sub_445db0(arg2, 0x19).b == 0)
                                                                                    goto label_4464b2
                                                                            else if (sub_445db0(arg2, 0x36).b == 0
                                                                                    && sub_445db0(arg2, 0x37).b == 0)
                                                                                goto label_44648f
                                                    else if (sub_445db0(arg2, 0x5e).b == 0
                                                            && sub_445db0(arg2, 0x56).b == 0)
                                                        result = sub_445db0(arg2, 0xd)
                                                        
                                                        if (result.b == 0)
                                                            goto label_4463e5
            else
                result = sub_445db0(arg2, 0x4c)
                
                if (result.b == 0)
                    goto label_4462cf
    
    result.b = 0
    return result
}
