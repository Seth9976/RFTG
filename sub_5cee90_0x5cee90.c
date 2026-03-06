// 函数名称: sub_5cee90
// 虚拟地址: 0x5cee90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5cee90(int32_t* arg1)
{
    // 第一条实际指令: if (data_8b9784 == 0)
    if (data_8b9784 == 0)
        return 0
    
    for (int32_t i = 0; i u< 0xc; i += 4)
        if (sub_5cd130(arg1, *(i + &data_8ba1c8), 0x10) == 0)
            return 1
    
    RAWINPUTDEVICELIST* pRawInputDeviceList = data_bedd5c
    
    if (pRawInputDeviceList == 0)
        if (GetRawInputDeviceList(pRawInputDeviceList, &data_bedd60, 8) == 0xffffffff)
            return 0
        
        int32_t eax_5 = data_bedd60
        
        if (eax_5 == 0)
            return 0
        
        int32_t __saved_ebx_1 = eax_5 << 3
        RAWINPUTDEVICELIST* pRawInputDeviceList_1 = sub_5d0ac0()
        data_bedd5c = pRawInputDeviceList_1
        
        if (pRawInputDeviceList_1 == 0)
            sub_5cd050(pRawInputDeviceList_1)
            return 0
        
        bool cond:0_1 = GetRawInputDeviceList(pRawInputDeviceList_1, &data_bedd60, 8) != 0xffffffff
        pRawInputDeviceList = data_bedd5c
        
        if (not(cond:0_1))
            RAWINPUTDEVICELIST* __saved_ebx_3 = pRawInputDeviceList
            sub_5d0af0()
            data_bedd5c = 0
            return 0
    
    int32_t i_1 = 0
    
    if (data_bedd60 u> 0)
        do
            uint32_t pcbSize = 0x20
            uint32_t pcbSize_1 = 0x80
            int32_t data_1 = 0x20
            
            if (pRawInputDeviceList[i_1].dwType == 2)
                void data
                int16_t var_24
                int16_t var_20
                
                if (GetRawInputDeviceInfoA(pRawInputDeviceList[i_1].hDevice, RIDI_DEVICEINFO, &data_1, 
                        &pcbSize) != 0xffffffff && (zx.d(var_20) << 0x10 | zx.d(var_24)) == *arg1 &&
                        GetRawInputDeviceInfoA(*(data_bedd5c + (i_1 << 3)), RIDI_DEVICENAME, &data, 
                        &pcbSize_1) != 0xffffffff)
                    void* const var_bc_6 = &data_6b4518
                    void* var_c0_3 = &data
                    
                    if (sub_5cd410() != 0)
                        return 1
                
                pRawInputDeviceList = data_bedd5c
            
            i_1 += 1
        while (i_1 u< data_bedd60)
    
    return 0
}
