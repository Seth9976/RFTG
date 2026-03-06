// 函数名称: sub_5d4090
// 虚拟地址: 0x5d4090
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5d4090(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t (** arg4)(int32_t arg1))
{
    // 第一条实际指令: int32_t* ppv = arg3
    int32_t* ppv = arg3
    int32_t* ppv_3 = nullptr
    
    if (sub_5dc630() s< 0)
        sub_5cce60("XAudio2: CoInitialize() failed")
        return 0
    
    HRESULT eax_2 = CoCreateInstance(&data_6b5d38, 0, CLSCTX_INPROC_SERVER, &data_6b5d48, &ppv)
    bool cond:0 = eax_2 == 0
    
    if (eax_2 s>= 0)
        int32_t* ppv_1 = ppv
        int32_t eax_3 = (*(*ppv_1 + 0x14))(ppv_1, 0, 0xffffffff)
        
        if (eax_3 s< 0)
            int32_t* ppv_2 = ppv
            (*(*ppv_2 + 8))(ppv_2)
        else
            ppv_3 = ppv
        
        cond:0 = eax_3 == 0
    
    if (not(cond:0))
        CoUninitialize()
        sub_5cce60("XAudio2: XAudio2Create() failed at initialization")
        return 0
    
    (*(*ppv_3 + 8))(ppv_3)
    *arg4 = sub_5d3910
    arg4[1] = sub_5d3c60
    arg4[4] = sub_5d3a90
    arg4[3] = sub_5d3b20
    arg4[6] = sub_5d3b50
    arg4[5] = sub_5d3a70
    arg4[7] = sub_5d3bb0
    arg4[0xa] = sub_5d4080
    return 1
}
