private static void NoclipFixed()
{
bool flag = false;
            List<InputDevice> list = new List<InputDevice>();
            InputDevices.GetDevicesWithCharacteristics(InputDeviceCharacteristics.HeldInHand | InputDeviceCharacteristics.Controller | InputDeviceCharacteristics.Left, list);
            list[0].TryGetFeatureValue(CommonUsages.triggerButton, out flag);
            bool flag2 = flag;
            bool flag3 = flag2;
            if (flag3)
            {
                bool flag4 = !TestMenu.flag2;
                bool flag5 = flag4;
                if (flag5)
                {
                    MeshCollider[] array = Resources.FindObjectsOfTypeAll<MeshCollider>();
                    foreach (MeshCollider meshCollider in array)
                    {
                        meshCollider.transform.localScale = meshCollider.transform.localScale / 10000f;
                    }
                    TestMenu.flag2 = true;
                    TestMenu.flag1 = false;
                }
            }
            else
            {
                bool flag6 = !TestMenu.flag1;
                bool flag7 = flag6;
                if (flag7)
                {
                    MeshCollider[] array3 = Resources.FindObjectsOfTypeAll<MeshCollider>();
                    foreach (MeshCollider meshCollider2 in array3)
                    {
                        meshCollider2.transform.localScale = meshCollider2.transform.localScale * 10000f;
                    }
                    TestMenu.flag1 = true;
                    TestMenu.flag2 = false;
                }
            }
}