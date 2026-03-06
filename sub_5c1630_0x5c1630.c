// 函数名称: sub_5c1630
// 虚拟地址: 0x5c1630
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c1630(int32_t arg1, int16_t arg2, int32_t arg3, int32_t* arg4)
{
    // 第一条实际指令: uint32_t eax_1
    uint32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(zx.d(arg2))
    char* eax_3 = sub_5c0ee0(arg1, eax_1, edx)
    
    if (eax_3 == 0)
        zip_error_set(arg4, 0xe, 0)
        return 0
    
    int32_t* var_8 = nullptr
    arg2.d = 0
    
    if (xff67edc5::_Atomic_load_uchar::operator[]::_Atomic_load_uchar(eax_3) != 0)
        while (sub_5c0c50(eax_3) == 0)
            int16_t eax_7 = sub_5c0cd0(eax_3)
            uint32_t edi_1 = zx.d(sub_5c0cd0(eax_3))
            uint32_t var_10_1 = edi_1
            int32_t eax_10
            int32_t edx_2
            edx_2:eax_10 = sx.q(edi_1)
            int128_t* eax_11 = sub_5c0c80(eax_3, eax_10, edx_2)
            
            if (eax_11 == 0)
                break
            
            int32_t* eax_12 = sub_5a881a(0x10)
            
            if (eax_12 != 0)
                *eax_12 = 0
                eax_12[1] = arg3
                eax_12[2].w = eax_7
                *(eax_12 + 0xa) = edi_1.w
                
                if (edi_1.w == 0)
                    eax_12[3] = 0
                label_5c1744:
                    
                    if (arg2.d == 0)
                        arg2.d = eax_12
                    else
                        *var_8 = eax_12
                    
                    var_8 = eax_12
                    
                    if (xff67edc5::_Atomic_load_uchar::operator[]::_Atomic_load_uchar(eax_3) == 0)
                        break
                    
                    continue
                else
                    int128_t* eax_15 = sub_5c38f0(eax_11, edi_1, nullptr)
                    eax_12[3] = eax_15
                    
                    if (eax_15 != 0)
                        goto label_5c1744
                    
                    __free_base(eax_12)
            
            zip_error_set(arg4, 0xe, 0)
            sub_5c0c20(eax_3)
            sub_5c1400(arg2.d)
            return 0
    
    if (sub_5c0c50(eax_3) != 0)
        sub_5c0c20(eax_3)
        return arg2.d
    
    zip_error_set(arg4, 0x15, 0)
    sub_5c0c20(eax_3)
    sub_5c1400(arg2.d)
    return 0
}
