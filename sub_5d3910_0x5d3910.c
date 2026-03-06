// 函数名称: sub_5d3910
// 虚拟地址: 0x5d3910
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d3910(int32_t arg1)
{
    // 第一条实际指令: int32_t edi = 0
    int32_t edi = 0
    int32_t* ppv_3 = nullptr
    int32_t var_8 = 0
    int32_t* ppv
    
    if (ppv != 0)
        sub_5cce60("XAudio2: capture devices unsupported.")
        return 0xffffffff
    
    if (CoCreateInstance(&data_6b5d38, 0, CLSCTX_INPROC_SERVER, &data_6b5d48, &ppv) s>= 0)
        int32_t* ppv_1 = ppv
        int32_t eax_1 = (*(*ppv_1 + 0x14))(ppv_1, 0, 0xffffffff)
        
        if (eax_1 s< 0)
            int32_t* ppv_2 = ppv
            (*(*ppv_2 + 8))(ppv_2)
        else
            ppv_3 = ppv
        
        if (eax_1 == 0)
            if ((*(*ppv_3 + 0xc))(ppv_3, &var_8) != 0)
                sub_5cce60("XAudio2: IXAudio2::GetDeviceCount() failed.")
                return (*(*ppv_3 + 8))(ppv_3)
            
            if (var_8 u> 0)
                do
                    void var_434
                    
                    if ((*(*ppv_3 + 0x10))(ppv_3, edi, &var_434) == 0)
                        int16_t var_234[0x116]
                        int32_t var_448_2 = sub_5cd1d0(&var_234) * 2 + 2
                        int16_t (* var_44c_3)[0x116] = &var_234
                        int32_t eax_9 = sub_5dd160("UTF-8", "UTF-16LE")
                        
                        if (eax_9 != 0)
                            arg1(eax_9)
                            int32_t var_448_3 = eax_9
                            sub_5d0af0()
                    
                    edi += 1
                while (edi u< var_8)
            
            return (*(*ppv_3 + 8))(ppv_3)
    
    sub_5cce60("XAudio2: XAudio2Create() failed at detection.")
    return 0xffffffff
}
